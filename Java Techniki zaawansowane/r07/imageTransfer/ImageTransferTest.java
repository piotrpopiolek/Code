package imageTransfer;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstruj�cy przekazywanie obrazk�w
 * mi�dzy aplikacj� w j�zyku Java a schowkiem systemowym.
 * @version 1.22 2007-08-16
 * @author Cay Horstmann
 */
public class ImageTransferTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new ImageTransferFrame();
               frame.setTitle("ImageTransferTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}

