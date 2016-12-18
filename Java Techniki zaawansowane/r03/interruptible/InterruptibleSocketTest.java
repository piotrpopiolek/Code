package interruptible;

import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.net.*;
import java.io.*;
import java.nio.channels.*;
import javax.swing.*;

/**
 * Program prezentuj�cy spos�b przerwania dzia�ania kana�u gniazda.
 * @author Cay Horstmann
 * @version 1.03 2012-06-04
 */
public class InterruptibleSocketTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new InterruptibleSocketFrame();
               frame.setTitle("InterruptibleSocketTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}

class InterruptibleSocketFrame extends JFrame
{
   public static final int TEXT_ROWS = 20;
   public static final int TEXT_COLUMNS = 60;

   private Scanner in;
   private JButton interruptibleButton;
   private JButton blockingButton;
   private JButton cancelButton;
   private JTextArea messages;
   private TestServer server;
   private Thread connectThread;

   public InterruptibleSocketFrame()
   {
      JPanel northPanel = new JPanel();
      add(northPanel, BorderLayout.NORTH);

      messages = new JTextArea(TEXT_ROWS, TEXT_COLUMNS);
      add(new JScrollPane(messages));

      interruptibleButton = new JButton("Interruptible");
      blockingButton = new JButton("Blocking");

      northPanel.add(interruptibleButton);
      northPanel.add(blockingButton);

      interruptibleButton.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               interruptibleButton.setEnabled(false);
               blockingButton.setEnabled(false);
               cancelButton.setEnabled(true);
               connectThread = new Thread(new Runnable()
                  {
                     public void run()
                     {
                        try
                        {
                           connectInterruptibly();
                        }
                        catch (IOException e)
                        {
                           messages.append("\nInterruptibleSocketTest.connectInterruptibly: " + e);
                        }
                     }
                  });
               connectThread.start();
            }
         });

      blockingButton.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               interruptibleButton.setEnabled(false);
               blockingButton.setEnabled(false);
               cancelButton.setEnabled(true);
               connectThread = new Thread(new Runnable()
                  {
                     public void run()
                     {
                        try
                        {
                           connectBlocking();
                        }
                        catch (IOException e)
                        {
                           messages.append("\nInterruptibleSocketTest.connectBlocking: " + e);
                        }
                     }
                  });
               connectThread.start();
            }
         });

      cancelButton = new JButton("Cancel");
      cancelButton.setEnabled(false);
      northPanel.add(cancelButton);
      cancelButton.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               connectThread.interrupt();
               cancelButton.setEnabled(false);
            }
         });
      server = new TestServer();
      new Thread(server).start();
      pack();
   }

   /**
    * ��czy si� z serwerem testowym, u�ywaj�c przerywalnych operacji wej�cia-wyj�cia.
    */
   public void connectInterruptibly() throws IOException
   {
      messages.append("Interruptible:\n");
      try (SocketChannel channel = SocketChannel.open(new InetSocketAddress("localhost", 8189)))
      {
         in = new Scanner(channel);
         while (!Thread.currentThread().isInterrupted())
         {
            messages.append("Reading ");
            if (in.hasNextLine())
            {
               String line = in.nextLine();
               messages.append(line);
               messages.append("\n");
            }
         }
      }
      finally
      {
         EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               messages.append("Channel closed\n");
               interruptibleButton.setEnabled(true);
               blockingButton.setEnabled(true);
            }
         });
      }
   }

   /**
    * ��czy si� z serwerem testowym, u�ywaj�c blokuj�cych operacji wej�cia-wyj�cia
    */
   public void connectBlocking() throws IOException
   {
      messages.append("Blocking:\n");
      try (Socket sock = new Socket("localhost", 8189))
      {
         in = new Scanner(sock.getInputStream());
         while (!Thread.currentThread().isInterrupted())
         {
            messages.append("Reading ");
            if (in.hasNextLine())
            {
               String line = in.nextLine();
               messages.append(line);
               messages.append("\n");
            }
         }
      }
      finally
      {
         EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               messages.append("Socket closed\n");
               interruptibleButton.setEnabled(true);
               blockingButton.setEnabled(true);
            }
         });      
      }
   }

   /**
    * Serwer wielow�tkowy nas�uchuj�cy na porcie 8189 i wysy�aj�cy klientom warto�ci 
    * liczbowe.
    * Po 10 liczbach symuluje "zawieszenie" dzia�ania.
    */
   class TestServer implements Runnable
   {
      public void run()
      {
         try
         {
            ServerSocket s = new ServerSocket(8189);

            while (true)
            {
               Socket incoming = s.accept();
               Runnable r = new TestServerHandler(incoming);
               Thread t = new Thread(r);
               t.start();
            }
         }
         catch (IOException e)
         {
            messages.append("\nTestServer.run: " + e);
         }
      }
   }

   /**
    * Klasa obs�uguj�ca po��czenie z pojedynczym klientem.
    */
   class TestServerHandler implements Runnable
   {
      private Socket incoming;
      private int counter;

      /**
       * Tworzy obiekt obs�ugi.
       * @param i gniazdko po��czenia
       */
      public TestServerHandler(Socket i)
      {
         incoming = i;
      }

      public void run()
      {
         try 
         {
            try
            {
               OutputStream outStream = incoming.getOutputStream();
               PrintWriter out = new PrintWriter(outStream, true /* autoFlush */);
               while (counter < 100)
               {
                  counter++;
                  if (counter <= 10) out.println(counter);
                  Thread.sleep(100);
               }
            }
            finally
            {
               incoming.close();
               messages.append("Closing server\n");
            }
         }
         catch (Exception e)
         {
            messages.append("\nTestServerHandler.run: " + e);
         }
      }
   }
}
