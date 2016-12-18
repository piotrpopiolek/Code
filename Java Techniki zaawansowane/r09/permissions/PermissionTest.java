package permissions;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

/**
 * Demonstruje wykorzystanie
 * w�asnej klasy pozwole� WordCheckPermission.
 * @version 1.03 2007-10-06
 * @author Cay Horstmann
 */
public class PermissionTest
{
   public static void main(String[] args)
   {
      System.setProperty("java.security.policy", "permissions/PermissionTest.policy");      
      System.setSecurityManager(new SecurityManager());
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new PermissionTestFrame();
               frame.setTitle("PermissionTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}

/**
 * Ramka zawieraj�ca pole tekstowe umo�liwiaj�ce
 * dodawanie tekstu do obszaru tekstowego pod warunkiem, �e
 * nie zawiera on zabronionych s��w.
 */
class PermissionTestFrame extends JFrame
{
   private JTextField textField;
   private WordCheckTextArea textArea;
   private static final int TEXT_ROWS = 20;
   private static final int TEXT_COLUMNS = 60;

   public PermissionTestFrame()
   {
      textField = new JTextField(20);
      JPanel panel = new JPanel();
      panel.add(textField);
      JButton openButton = new JButton("Insert");
      panel.add(openButton);
      openButton.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               insertWords(textField.getText());
            }
         });

      add(panel, BorderLayout.NORTH);

      textArea = new WordCheckTextArea();
      textArea.setRows(TEXT_ROWS);
      textArea.setColumns(TEXT_COLUMNS);
      add(new JScrollPane(textArea), BorderLayout.CENTER);
      pack();
   }

   /**
    * Pr�buje doda� s�owa do obszaru tekstowego.
    * Wy�wietla okno dialogowe, je�li pr�ba nie powiedzie si�.
    * @param words wstawiane s�owa
    */
   public void insertWords(String words)
   {
      try
      {
         textArea.append(words + "\n");
      }
      catch (SecurityException ex)
      {
         JOptionPane.showMessageDialog(this, "I am sorry, but I cannot do that.");
         ex.printStackTrace();
      }
   }
}

/**
 * Klasa obszaru tekstowego, kt�rej metoda append
 * sprawdza, czy dodawany tekst nie zawiera zabronionych s��w.
 */
class WordCheckTextArea extends JTextArea
{
   public void append(String text)
   {
      WordCheckPermission p = new WordCheckPermission(text, "insert");
      SecurityManager manager = System.getSecurityManager();
      if (manager != null) manager.checkPermission(p);
      super.append(text);
   }
}
