package imageProcessing;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstruj¹cy ró¿ne operacje na obrazach.
 * @version 1.03 2007-08-16
 * @author Cay Horstmann
 */
public class ImageProcessingTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new ImageProcessingFrame();
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}