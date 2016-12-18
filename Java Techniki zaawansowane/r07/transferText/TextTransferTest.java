package transferText;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstruj¹cy przekazywanie tekstu
 * miêdzy aplikacj¹ Java i schowkiem systemowym.
 * @version 1.13 2007-08-16
 * @author Cay Horstmann
 */
public class TextTransferTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new TextTransferFrame();
               frame.setTitle("TextTransferTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}