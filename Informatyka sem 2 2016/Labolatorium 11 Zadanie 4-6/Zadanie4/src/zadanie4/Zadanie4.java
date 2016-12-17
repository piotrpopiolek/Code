/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadanie4;

import static java.lang.System.out;
import java.util.Collections;
import static java.util.Collections.reverseOrder;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Random;
import java.util.Scanner;


/**
 *
 * @author Lenovo
 */
public class Zadanie4 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        LinkedList list=new LinkedList();
        Random random=new Random();
        Scanner scanner=new Scanner(System.in);
        out.println("Podaj rozmiar kolekcji: ");
        int size=scanner.nextInt();
        out.println("Pokaz liste: ");
        for(int i=0;i<size;i++)
        {
            list.add(random.nextInt(1000));
            out.print(list.get(i)+" ");
        }
        out.println();
        out.print("Podaj jakiej liczby szukasz w kolekcji: ");
        int search=scanner.nextInt();
        if(list.contains(search))
        {
            out.println("Liczba jest w kolekcji na pozycji "+list.indexOf(search));
            out.println("Czy usunac element z tej pozycji?");
            out.println("1. Tak\t2.Nie");
            int czy=scanner.nextInt();
            if(czy==1)
                list.remove(list.indexOf(search));
        }
        else
        {
            out.println("Liczba nie jest w kolekcji");
        }
        for(Iterator<Integer> it=list.iterator();it.hasNext();)
        {
            out.print(it.next()+" ");
        }
        out.println();
        out.println("Znajdowanie wartości max i min");
        Object min=Collections.min(list);
        out.println("Najmniejsza liczba: " + min);
        Object max=Collections.max(list);
        out.println("Największa liczba: " + max);
        out.println("Sortowanie rosnące: ");
        Collections.sort(list);
        for(Object i:list)
        {
            out.print(i + " ");
        }
        out.println();
        Collections.sort(list,reverseOrder());
        out.println("Sortowanie malejące: ");
        for(Object i:list)
        {
            out.print(i + " ");
        }
        out.println();
    }
}

