package desktopApp;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstrujący API aplikacji desktop.
 * @version 1.00 2007-09-22
 * @author Cay Horstmann
 */
public class DesktopAppTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new DesktopAppFrame();
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}