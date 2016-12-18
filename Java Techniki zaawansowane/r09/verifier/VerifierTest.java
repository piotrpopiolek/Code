package verifier;

import java.applet.*;
import java.awt.*;

/**
 * Program demonstruj�cy dzia�anie weryfikatora kodu maszyny
 * wirtualnej. Je�li zmodyfikujemy plik klasy, korzystaj�c
 * z edytora kodu szesnastkowego, weryfikator wykryje to
 * podczas pr�by uruchomienia programu.
 * @version 1.00 1997-09-10
 * @author Cay Horstmann
 */
public class VerifierTest extends Applet
{
   public static void main(String[] args)
   {
      System.out.println("1 + 2 == " + fun());
   }

   /**
    * Metoda wyznaczaj�ca wynik dzia�ania 1 + 2
    * @return 3, je�li kod metody fun nie zosta� zmodyfikowany
    */
   public static int fun()
   {
      int m;
      int n;
      m = 1;
      n = 2;
      // powy�sz� instrukcj� nale�y zmieni� w pliku klasy
      // na "m = 2", korzystaj�c z edytora kodu szesnastkowego

      int r = m + n;
      return r;
   }

   public void paint(Graphics g)
   {
      g.drawString("1 + 2 == " + fun(), 20, 20);
   }
}
