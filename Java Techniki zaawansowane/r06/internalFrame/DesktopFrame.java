package internalFrame;

import java.awt.*;
import java.awt.event.*;
import java.beans.*;
import javax.swing.*;

/**
 * Ramka pulpitu zawieraj�ca panele wy�wietlaj�ce zawarto�� plik�w HTML.
 */
public class DesktopFrame extends JFrame
{
   private static final int DEFAULT_WIDTH = 600;
   private static final int DEFAULT_HEIGHT = 400;
   private static final String[] planets = { "Mercury", "Venus", "Earth", "Mars", "Jupiter",
         "Saturn", "Uranus", "Neptune", "Pluto", };

   private JDesktopPane desktop;
   private int nextFrameX;
   private int nextFrameY;
   private int frameDistance;
   private int counter;

   public DesktopFrame()
   {
      setSize(DEFAULT_WIDTH, DEFAULT_HEIGHT);

      desktop = new JDesktopPane();
      add(desktop, BorderLayout.CENTER);

      // tworzy menu

      JMenuBar menuBar = new JMenuBar();
      setJMenuBar(menuBar);
      JMenu fileMenu = new JMenu("File");
      menuBar.add(fileMenu);
      JMenuItem openItem = new JMenuItem("New");
      openItem.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               createInternalFrame(new JLabel(
                     new ImageIcon(getClass().getResource(planets[counter] + ".gif"))),
                     planets[counter]);
               counter = (counter + 1) % planets.length;
            }
         });
      fileMenu.add(openItem);
      JMenuItem exitItem = new JMenuItem("Exit");
      exitItem.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               System.exit(0);
            }
         });
      fileMenu.add(exitItem);
      JMenu windowMenu = new JMenu("Window");
      menuBar.add(windowMenu);
      JMenuItem nextItem = new JMenuItem("Next");
      nextItem.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               selectNextWindow();
            }
         });
      windowMenu.add(nextItem);
      JMenuItem cascadeItem = new JMenuItem("Cascade");
      cascadeItem.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               cascadeWindows();
            }
         });
      windowMenu.add(cascadeItem);
      JMenuItem tileItem = new JMenuItem("Tile");
      tileItem.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               tileWindows();
            }
         });
      windowMenu.add(tileItem);
      final JCheckBoxMenuItem dragOutlineItem = new JCheckBoxMenuItem("Drag Outline");
      dragOutlineItem.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               desktop.setDragMode(dragOutlineItem.isSelected() ? JDesktopPane.OUTLINE_DRAG_MODE
                     : JDesktopPane.LIVE_DRAG_MODE);
            }
         });
      windowMenu.add(dragOutlineItem);
   }

   /**
    * Tworzy wewn�trzn� ramk� pulpitu.
    * @param c komponent wewn�trz ramki wewn�trznej
    * @param t tytu� ramki wewn�trznej.
    */
   public void createInternalFrame(Component c, String t)
   {
      final JInternalFrame iframe = new JInternalFrame(t, true, // zmiana rozmiar�w
         true,  // mo�liwo�� zamkni�cia
         true,  // maksymalizacja
         true); // zwini�cie do ikony


      iframe.add(c, BorderLayout.CENTER);
      desktop.add(iframe);

      iframe.setFrameIcon(new ImageIcon(getClass().getResource("document.gif")));

      // dodaje obiekt nas�uchuj�cy, aby potwierdzi� zamkni�cie ramki
      iframe.addVetoableChangeListener(new VetoableChangeListener()
         {
            public void vetoableChange(PropertyChangeEvent event) throws PropertyVetoException
            {
               String name = event.getPropertyName();
               Object value = event.getNewValue();

               // sprawdza tylko pr�by zamkni�cia ramki
               if (name.equals("closed") && value.equals(true))
               {
                  // prosi u�ytkownika o potwierdzenie zamkni�cia 
                  int result = JOptionPane.showInternalConfirmDialog(iframe, "OK to close?",
                        "Select an Option", JOptionPane.YES_NO_OPTION);

                  // je�li u�ytkownik si� nie zgodzi, to zg�asza weto
                  if (result != JOptionPane.YES_OPTION) throw new PropertyVetoException(
                        "User canceled close", event);
               }
            }
         });

      // ustala pozycj� ramki
      int width = desktop.getWidth() / 2;
      int height = desktop.getHeight() / 2;
      iframe.reshape(nextFrameX, nextFrameY, width, height);

      iframe.show();

      // wyb�r ramki - mo�e zosta� zawetowany
      try
      {
         iframe.setSelected(true);
      }
      catch (PropertyVetoException ex)
      {
      }

      frameDistance = iframe.getHeight() - iframe.getContentPane().getHeight();

      // oblicza odleg�o�� pomi�dzy ramkami

      nextFrameX += frameDistance;
      nextFrameY += frameDistance;
      if (nextFrameX + width > desktop.getWidth()) nextFrameX = 0;
      if (nextFrameY + height > desktop.getHeight()) nextFrameY = 0;
   }

   /**
    * Rozmieszcza kaskadowo te ramki pulpitu, kt�re nie s� zwini�te do ikony.
    */
   public void cascadeWindows()
   {
      int x = 0;
      int y = 0;
      int width = desktop.getWidth() / 2;
      int height = desktop.getHeight() / 2;

      for (JInternalFrame frame : desktop.getAllFrames())
      {
         if (!frame.isIcon())
         {
            try
            {
               // pr�buje przeprowadzi� ramki do stanu po�redniego
               // co mo�e zosta� zawetowane
               frame.setMaximum(false);
               frame.reshape(x, y, width, height);

               x += frameDistance;
               y += frameDistance;
               // zawija wok� brzegu pulpitu
               if (x + width > desktop.getWidth()) x = 0;
               if (y + height > desktop.getHeight()) y = 0;
            }
            catch (PropertyVetoException ex)
            {
            }
         }
      }
   }

   /**
    * Rozmieszcza s�siaduj�co te ramki pulpitu, kt�re nie s� zwini�te do ikony.
    */
   public void tileWindows()
   {
      // zlicza ramki, kt�re nie s� zwini�te do ikony
      int frameCount = 0;
      for (JInternalFrame frame : desktop.getAllFrames())
         if (!frame.isIcon()) frameCount++;
      if (frameCount == 0) return;

      int rows = (int) Math.sqrt(frameCount);
      int cols = frameCount / rows;
      int extra = frameCount % rows;
      // liczba kolumn z dodatkowym wierszem

      int width = desktop.getWidth() / cols;
      int height = desktop.getHeight() / rows;
      int r = 0;
      int c = 0;
      for (JInternalFrame frame : desktop.getAllFrames())
      {
         if (!frame.isIcon())
         {
            try
            {
               frame.setMaximum(false);
               frame.reshape(c * width, r * height, width, height);
               r++;
               if (r == rows)
               {
                  r = 0;
                  c++;
                  if (c == cols - extra)
                  {
                     // dodatkowy wiersz
                     rows++;
                     height = desktop.getHeight() / rows;
                  }
               }
            }
            catch (PropertyVetoException ex)
            {
            }
         }
      }
   }

   /**
    * Wybiera ramk�.
    */
   public void selectNextWindow()
   {
      JInternalFrame[] frames = desktop.getAllFrames();
      for (int i = 0; i < frames.length; i++)
      {
         if (frames[i].isSelected())
         {
            // znajduje ramk�, kt�ra nie jest zwini�ta do ikony
            // i mo�e zosta� wybrana
            int next = (i + 1) % frames.length;
            while (next != i)
            {
               if (!frames[next].isIcon())
               {
                  try
                  {
                     // pozosta�e ramki s� zwini�te do ikon lub zg�osi�y weto do wyboru
                     frames[next].setSelected(true);
                     frames[next].toFront();
                     frames[i].toBack();
                     return;
                  }
                  catch (PropertyVetoException ex)
                  {
                  }
               }
               next = (next + 1) % frames.length;
            }
         }
      }
   }
}
