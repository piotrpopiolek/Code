/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package paramtest;

/**
 *
 * @author Lenovo
 */
public class ParamTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        // Test 1 Metody nie mogą modyfikować parametrów liczbowych.
        System.out.println("Testowanie tripleValeu:");
            double percent=10;
        System.out.println("Przed: percent= " +percent);
        tripleValue(percent);
        System.out.println("Po: percent= "+percent);
        //Test 2 Metody mogą zmieniać stan parametrów będących obiektami.
        System.out.println("\nTestowanie tripleSalary:");
        Employee harry=new Employee("Grzegorz",50000);
        System.out.println("Przed: salary= "+harry.getSalary());
        tripleSalary(harry);
        System.out.println("Po: salary= "+harry.getSalary());
        //Test 3 Metody nie mogą dodawać nowych obiektów do parametrów obiektowych.
        System.out.println("\nTestowanie swap:");
        Employee a=new Employee("Alicja",70000);
        Employee b=new Employee("Grzegorz",60000);
        System.out.println("Przed: a= "+a.getName());
        System.out.println("Przed b= "+b.getName());
        swap(a,b);
        System.out.println("Po: a="+a.getName());
        System.out.println("Po b= "+b.getName());
    }
public static void tripleValue(double x) //nie działa
{
    x=3*x;
    System.out.println("Koniec metody: x= "+x);
}
public static void tripleSalary(Employee x) //działa
{
    x.raiseSalary(200);
    System.out.println("Koniec metody: salary= "+x.getSalary());
}
public static void swap(Employee x,Employee y)
{
    Employee temp=x;
    x=y;
    y=temp;
    System.out.println("Koniec metody: x= "+x.getName());
    System.out.println("Koniec metody: y= "+y.getName());
}
}
class Employee
{
    private String name;
    private double salary;
    public Employee(String n,double s)
    {
        name=n;
        salary=s;
    }
    public String getName()
    {
        return name;
    }
    public double getSalary()
    {
        return salary;
    }
    public void raiseSalary(double byPercent)
    {
        double raise=salary*byPercent/100;
        salary+=raise;
    }
}
