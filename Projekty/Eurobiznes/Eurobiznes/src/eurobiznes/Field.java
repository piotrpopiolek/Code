/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package eurobiznes;

import static java.lang.System.out;
import java.util.Random;

/**
 *
 * @author Lenovo
 */
public class Field 
{
    public void Menu()
    {
        boolean warunekKostki=true;
        if(warunekKostki)
        {
            out.println("1. Rzuć kostką");
            PairKostka wynikKostki=RzucKostka();
        }
        
    }
    public PairKostka RzucKostka()
    {
        Random generator=new Random();
        int Kostka1=generator.nextInt(5)+1;
        int Kostka2=generator.nextInt(5)+1;
        if(Kostka1==Kostka2)
        {
            PairKostka temp=new PairKostka(Kostka1+Kostka2,true);
            return temp;
        }
        else
        {
            PairKostka temp=new PairKostka(Kostka1+Kostka2,false);
            return temp;
        }
    }
}
