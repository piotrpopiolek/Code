/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadanie7;

import static java.lang.System.out;
import java.util.Collections;
import static java.util.Collections.reverseOrder;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Random;
import java.util.Scanner;
import java.util.Set;


/**
 *
 * @author Lenovo
 */
public class Zadanie7
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        HashSet<Integer> set=new HashSet<>();
        Random random=new Random();
        Scanner scanner=new Scanner(System.in);
        out.println("Podaj rozmiar kolekcji: ");
        int size=scanner.nextInt();
        for(int i=0;i<size;i++)
        {
            set.add(random.nextInt(10));
        }
        out.println();
        out.print("Podaj jakiej liczby szukasz w kolekcji: ");
        int search=scanner.nextInt();
        if(set.contains(search))
        {
            out.println("Liczba jest w kolekcji");
        }
        else
        {
            out.println("Liczba nie jest w kolekcji");
        }
        for(Iterator<Integer> it=set.iterator();it.hasNext();)
        {
            out.print(it.next()+" ");
        }
        out.println();
        out.println("Znajdowanie wartości max i min");
        Object min=Collections.min(set);
        out.println("Najmniejsza liczba: " + min);
        Object max=Collections.max(set);
        out.println("Największa liczba: " + max);
    }
}

