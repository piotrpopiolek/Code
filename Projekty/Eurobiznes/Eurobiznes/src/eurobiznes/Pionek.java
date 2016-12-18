package eurobiznes;

import java.awt.*;
import javax.swing.*;

/**
 * @version 1.33 2007-04-14
 * @author Cay Horstmann
 */
public class Pionek extends JComponent
{
   private static final int DEFAULT_WIDTH = 30;
   private static final int DEFAULT_HEIGHT = 30;

   private Image image;

   public Pionek()
   {
      image = new ImageIcon("pionek_niebieski.jpg").getImage();
   }

   public void paintComponent(Graphics g)
   {
      if (image == null) return;

      // draw the image in the upper-left corner

      g.drawImage(image, 0, 0, null);
      // tile the image across the component

   }
   
   public Dimension getPreferredSize() { return new Dimension(DEFAULT_WIDTH, DEFAULT_HEIGHT); }
}
