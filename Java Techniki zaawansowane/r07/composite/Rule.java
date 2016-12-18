package composite;

import java.awt.*;

/**
 * Klasa reprezentuj�ca regu�� Portera-Duffa.
 */
class Rule
{
   private String name;
   private String porterDuff1;
   private String porterDuff2;

   /**
    * Tworzy obiekt reprezentuj�cy regu�� Portera-Duffa
    * @param n nazwa regu�y
    * @param pd1 pierwszy wiersz diagramu Portera-Duffa
    * @param pd2 drugi wiersz diagramu Portera-Duffa
    */
   public Rule(String n, String pd1, String pd2)
   {
      name = n;
      porterDuff1 = pd1;
      porterDuff2 = pd2;
   }

   /**
    * Zwraca obja�nienie sposobu dzia�ania regu�y.
    * @return obja�nienie
    */
   public String getExplanation()
   {
      StringBuilder r = new StringBuilder("Source ");
      if (porterDuff2.equals("  ")) r.append("clears");
      if (porterDuff2.equals(" S")) r.append("overwrites");
      if (porterDuff2.equals("DS")) r.append("blends with");
      if (porterDuff2.equals(" D")) r.append("alpha modifies");
      if (porterDuff2.equals("D ")) r.append("alpha complement modifies");
      if (porterDuff2.equals("DD")) r.append("does not affect");
      r.append(" destination");
      if (porterDuff1.equals(" S")) r.append(" and overwrites empty pixels");
      r.append(".");
      return r.toString();
   }

   public String toString()
   {
      return name;
   }

   /**
    * Zwraca warto�� wyznaczon� przez regu��
    * jako obiekt klasy AlphaComposite
    * @return sta�a AlphaComposite lub -1, je�li nie istnieje odpowiednia sta�a.
    */
   public int getValue()
   {
      try
      {
         return (Integer) AlphaComposite.class.getField(name).get(null);
      }
      catch (Exception e)
      {
         return -1;
      }
   }
}
