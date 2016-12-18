package write;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstruj¹cy sposób tworzenia dokumentu XML. 
 * Zapisuje grafikê w pliku formatu SVG
 * @version 1.11 2012-01-26
 * @author Cay Horstmann
 */
public class XMLWriteTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new XMLWriteFrame();
               frame.setTitle("XMLWriteTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}