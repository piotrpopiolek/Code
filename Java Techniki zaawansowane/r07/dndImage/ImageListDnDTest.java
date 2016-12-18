package dndImage;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstruj�cy operacj� "przeci�gnij i upu��" na li�cie obrazk�w.
 * @version 1.01 2012-01-26
 * @author Cay Horstmann
 */
public class ImageListDnDTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new ImageListDnDFrame();
               frame.setTitle("ImageListDnDTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}
