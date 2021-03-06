package listRendering;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstrujący wykorzystanie obiektów 
 * rysujących komórki listy.
 * @version 1.24 2012-01-26
 * @author Cay Horstmann
 */
public class ListRenderingTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new ListRenderingFrame();
               frame.setTitle("ListRenderingTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}