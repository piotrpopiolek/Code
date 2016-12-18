/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package constructortest;

import java.util.Random;

/**
 *
 * @author Lenovo
 */
public class ConstructorTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
       Employee[] staff = new Employee[3];
       staff[0]=new Employee("Hubert",40000);
       staff[1]=new Employee(60000);
       staff[2]=new Employee();
       //Wydruk informacji o wszystkich obiektach
       for(Employee e:staff)
       {
           System.out.println("name = "+e.getName()+", id = "+e.getId()+", salary = "+e.getSalary());
       }
    }
}
class Employee
{
    private static int nextId;
    private int id;
    private String name="";
    private double salary;
    //Statyczny blok inicjujacy
    static
    {
        Random generator =new Random();
        //Ustawienie zmiennej nextId na losowa liczbe calkowita z przedzialu 0-9999
        nextId=generator.nextInt();
    }
    //Blok inicjujący obiektów.
    {
    id=nextId;
    nextId++;
    }
    // Trzy konstruktory przeciążone
    public Employee(String n,double s)
    {
        name=n;
        salary=s;
    }
    public Employee(double s)
    {
        //Wywołanie konstruktora Employee(String,double)
        this("Employee #"+nextId,s);
    }
    //Konstruktor domyślny
    public Employee()
    {
        //Zmienna name zainicjowana wartoscia "" - patrz nizej.
        //Zmienna salary nie jest jawnie ustawiona - inicjacja wartoscia 0.
        //Zmienna id jest inicjowana w bloku inicjującym.
    }
    public String getName()
    {
        return name;
    }
    public double getSalary()
    {
        return salary;
    }
    public int getId()
    {
        return id;
    }
}
