/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package eurobiznes;

/**
 *
 * @author Lenovo
 */
public class PairKostka 
{
   private int first;
   private boolean second;
   public PairKostka(int first, boolean second) 
   { 
       this.first = first;  
       this.second = second; 
   }

   public int getFirst() 
   { return first; }
   public boolean getSecond() 
   { return second; }
   public void setFirst(int newValue) { first = newValue; }
   public void setSecond(boolean newValue) { second = newValue; }  
}
