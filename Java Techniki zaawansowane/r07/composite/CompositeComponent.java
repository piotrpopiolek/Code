package composite;

import java.awt.*;
import java.awt.geom.*;
import java.awt.image.*;
import javax.swing.*;

/**
 * Komponent prezentuj�cy z�o�enie dwu figur.
 */
class CompositeComponent extends JComponent
{
   private int rule;
   private Shape shape1;
   private Shape shape2;
   private float alpha;
   
   public CompositeComponent()
   {
      shape1 = new Ellipse2D.Double(100, 100, 150, 100);
      shape2 = new Rectangle2D.Double(150, 150, 150, 100);
   }

   public void paintComponent(Graphics g)
   {
      Graphics2D g2 = (Graphics2D) g;

      BufferedImage image = new BufferedImage(getWidth(), getHeight(), BufferedImage.TYPE_INT_ARGB);
      Graphics2D gImage = image.createGraphics();
      gImage.setPaint(Color.red);
      gImage.fill(shape1);
      AlphaComposite composite = AlphaComposite.getInstance(rule, alpha);
      gImage.setComposite(composite);
      gImage.setPaint(Color.blue);
      gImage.fill(shape2);
      g2.drawImage(image, null, 0, 0);
   }

   /**
    * Okre�la regu�� z�o�enia.
    * @param r regu�a (jako sta�a AlphaComposite)
    */
   public void setRule(int r)
   {
      rule = r;
      repaint();
   }

   /**
    * Okre�la warto�� alfa dla �r�d�a
    * @param a warto�� alfa z przedzia�u od 0 do 100
    */
   public void setAlpha(int a)
   {
      alpha = (float) a / 100.0F;
      repaint();
   }
}
