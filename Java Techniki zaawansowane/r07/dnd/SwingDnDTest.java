package dnd;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstrujący podstawową obsługę mechanizmu "przeciągnij i upuść"
 * przez komponenty Swing.
 * @version 1.10 2007-09-20
 * @author Cay Horstmann
 */
public class SwingDnDTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new SwingDnDFrame();
               frame.setTitle("SwingDnDTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}