package imageIO;

import java.awt.*;
import javax.swing.*;

/**
 * Program umo¿liwiaj¹cy odczyt i zapis plików graficznych
 * w formatach obs³ugiwanych przez JDK, w tym plików
 * zawieraj¹cych sekwencje obrazów.
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