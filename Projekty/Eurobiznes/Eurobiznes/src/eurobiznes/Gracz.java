/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package eurobiznes;

import static java.lang.System.out;
import java.util.ArrayList;

/**
 *
 * @author Lenovo
 */
public class Gracz 
{
    private String name;
    private int balance;
    private boolean dubel;
    private int position;
    private ArrayList ListaKart;
    public Gracz(String n)
    {
        name=n;
        balance=3000;
        dubel=false;
        position=1;
        ListaKart=new ArrayList();
    }
    public void Show()
    {
        out.println("Gracz: "+name);
        out.println("Stan: "+balance);
        if(dubel==true)
        out.println("Dubel: prawda");
        else
        out.println("Dubel: fałsz");
        out.println("Pozycja: "+position);
    }
    public void SprawdzPole()
    {
        
    }
    public void PokazKarty()
    {
        
    }
    public void SprzedajKarty()
    {
        
    }
}
