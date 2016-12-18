package imageIO;

import java.awt.*;
import javax.swing.*;

/**
 * Program umo�liwiaj�cy odczyt i zapis plik�w graficznych
 * w formatach obs�ugiwanych przez JDK, w tym plik�w
 * zawieraj�cych sekwencje obraz�w.
 * @version 1.03 2012-01-26
 * @author Cay Horstmann
 */
public class ImageIOTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new ImageIOFrame();
               frame.setTitle("CompositeTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}