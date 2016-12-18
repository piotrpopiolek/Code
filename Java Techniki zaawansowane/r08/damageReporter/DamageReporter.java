package damageReporter;

import javax.swing.*;

/**
 * Program demonstruj�cy u�ycie kodera i dekodera XML.
 * Klasa ta zawiera ca�y kod zwi�zany z interfejsem u�ytkownika i rysowaniem.
 * Dla Czytelnika interesuj�ce b�d� jedynie obiekty nas�uchuj�ce 
 * dla openItem i saveItem. Indywidualizacji dzia�ania kodera 
 * nale�y szuka� w klasie DamageReport.
 * @version 1.02 2012-01-26
 * @author Cay Horstmann
 */
public class DamageReporter extends JFrame
{
   public static void main(String[] args)
   {
      JFrame frame = new DamageReporterFrame();
      frame.setTitle("DamageReporter");
      frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      frame.setVisible(true);
   }
}
