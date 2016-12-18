package jaas;

import java.awt.*;
import javax.swing.*;

/**
 * Program uwierzytelnia u�ytkownika
 * za pomoc� w�asnego modu�u logowania,
 * a nast�pnie wykonuje SysPropAction, korzystaj�c
 * z pozwole� u�ytkownika.
 * @version 1.01 2012-06-10
 * @author Cay Horstmann
 */
public class JAASTest
{
   public static void main(final String[] args)
   {
      System.setSecurityManager(new SecurityManager());
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new JAASFrame();
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setTitle("JAASTest");
               frame.setVisible(true);
            }
         });
   }
}