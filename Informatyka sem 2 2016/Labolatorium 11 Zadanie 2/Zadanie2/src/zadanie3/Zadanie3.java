/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadanie3;

import java.io.InputStream;
import static java.lang.System.out;
import java.util.Scanner;
/**
 *
 * @author Lenovo
 */
public class Zadanie3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        Rectangle rectangle=new Rectangle("Rectangle",5,4);
        out.println("Pole obiektu "+rectangle.getName()+" wynosi: "+rectangle.area());
        Square square=new Square("Square",5);
        out.println("Pole obiektu "+square.getName()+" wynosi: "+square.area());
        Rectangle R=new Rectangle("R",2,3);
        out.println("Pole obiektu "+R.getName()+" wynosi: "+R.area());
        Square S=new Square("S",9);
        out.println("Pole obiektu "+S.getName()+" wynosi: "+S.area());
        R=(Rectangle) S;
        out.println("Pole obiektu "+R.getName()+" wynosi: "+R.area());
        out.println("Zadanie 4");
        ShapeContainer Pojemnik=new ShapeContainer();
        boolean warunek=true;
        Scanner in=new Scanner(System.in);
        while(warunek)
        {
        out.println("Co chcesz zrobic?");
        out.println("1. Dodaj Prostokąt\t2. Dodaj Kwadrat\t3.Pokaz Listę\t4. Zakończ");
        int opcja=in.nextInt();
        switch(opcja)
        {
            case 1:
            {
                String x = in.nextLine();
                out.println("Podaj nazwe prostokąta ");
                String n=in.nextLine();
                out.println("Podaj bok a ");
                double a=in.nextDouble();
                out.println("Podaj bok b ");
                double b=in.nextDouble();
                try
                {
                Pojemnik.addRectangle(n,a, b);
                }
                catch(IllegalArgumentException e)
                {
                out.println(e.getMessage());
                out.println("Podaj następnym razem wymiary dodatnie");
                }
                break;
            }
            case 2:
            {
                String x = in.nextLine();
                out.println("Podaj nazwe kwadratu ");
                String name=in.nextLine();
                out.println("Podaj bok a ");
                double a=in.nextDouble();
                try
                {
                Pojemnik.addRectangle(name,a, a);
                }
                catch(IllegalArgumentException e)
                {
                out.println(e.getMessage());
                out.println("Podaj następnym razem wymiary dodatnie");
                }
                break;
            }
            case 3:
            {
                Pojemnik.ShowAll();
                break;
            }
            case 4:
            {
                warunek=!warunek;
            }
        }
        }
    }  
}
