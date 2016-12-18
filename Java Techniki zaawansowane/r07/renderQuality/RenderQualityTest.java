package renderQuality;

import java.awt.*;
import javax.swing.*;

/**
 * Program demonstruj¹cy efekt zastosowania wskazówek operacji graficznych.
 * @version 1.10 2007-08-16
 * @author Cay Horstmann
 */
public class RenderQualityTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new RenderQualityTestFrame();
               frame.setTitle("RenderQualityTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}