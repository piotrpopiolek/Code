package list;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstruj¹cy prost¹ listê ³añcuchów znakowych.
 * @version 1.24 2012-06-07
 * @author Cay Horstmann
 */
public class ListTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new ListFrame();
               frame.setTitle("ListTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}