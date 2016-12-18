package rasterImage;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstruj¹cy tworzenie obrazu
 * z pojedynczych pikseli.
 * @version 1.13 2007-08-16
 * @author Cay Horstmann
 */
public class RasterImageTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new RasterImageFrame();
               frame.setTitle("RasterImageTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}