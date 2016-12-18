package imageTransfer;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstruj¹cy przekazywanie obrazków
 * miêdzy aplikacj¹ w jêzyku Java a schowkiem systemowym.
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

