package chart;

import java.awt.*;
import java.beans.*;
import javax.swing.*;

/**
 * Edytor w�a�ciwo�ci inverse ziarnka ChartBean.
 * W�a�ciwo�� inverse umo�liwia wyb�r kolorowych s�upk�w
 * wykresu lub kolorowego t�a.
 * @version 1.30 2007-10-03
 * @author Cay Horstmann
 */
public class InverseEditor extends PropertyEditorSupport
{
   private ImageIcon normalIcon = new ImageIcon(getClass().getResource("ChartBean_MONO_16x16.gif"));

   private ImageIcon inverseIcon = new ImageIcon(getClass().getResource(
         "ChartBean_INVERSE_16x16.gif"));

   public Component getCustomEditor()
   {
      return new InverseEditorPanel(this);
   }

   public boolean supportsCustomEditor()
   {
      return true;
   }

   public boolean isPaintable()
   {
      return true;
   }

   public String getAsText()
   {
      return null;
   }

   public String getJavaInitializationString()
   {
      return "" + getValue();
   }

   public void paintValue(Graphics g, Rectangle bounds)
   {
      ImageIcon icon = (Boolean) getValue() ? inverseIcon : normalIcon;
      int x = bounds.x + (bounds.width - icon.getIconWidth()) / 2;
      int y = bounds.y + (bounds.height - icon.getIconHeight()) / 2;
      g.drawImage(icon.getImage(), x, y, null);
   }
}
