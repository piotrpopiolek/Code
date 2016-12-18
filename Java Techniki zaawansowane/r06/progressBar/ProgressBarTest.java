package progressBar;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstruj�cy zastosowanie paska post�pu
 * do monitorowania post�pu wykonania w�tku.
 * @version 1.04 2007-08-01
 * @author Cay Horstmann
 */
public class ProgressBarTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new ProgressBarFrame();
               frame.setTitle("ProgressBarTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}
