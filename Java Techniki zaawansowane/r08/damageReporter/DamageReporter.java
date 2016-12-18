package damageReporter;

import javax.swing.*;

/**
 * Program demonstruj¹cy u¿ycie kodera i dekodera XML.
 * Klasa ta zawiera ca³y kod zwi¹zany z interfejsem u¿ytkownika i rysowaniem.
 * Dla Czytelnika interesuj¹ce bêd¹ jedynie obiekty nas³uchuj¹ce 
 * dla openItem i saveItem. Indywidualizacji dzia³ania kodera 
 * nale¿y szukaæ w klasie DamageReport.
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
