/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package statictest;

/**
 *
 * @author Lenovo
 */
public class StaticTest 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        Employee staff[]=new Employee[3];
        staff[0]=new Employee("Tomasz",40000);
        staff[1]=new Employee("Dariusz",60000);
        staff[2]=new Employee("Grzegorz",65000);
        
        for(Employee e:staff)
        {
            e.setID();
            System.out.println("name="+e.getName()+" id="+e.getID()+",salary="+e.getSalary());
        }
        
    }
    
}
class Employee
{
    private static int nextId=1;
    private String name;
    private double salary;
    private int id;
    public Employee(String n,double s)
    {
        name=n;
        salary=s;
        id=0;
    }
    public String getName()
    {
        return name;
    }
    public double getSalary()
    {
        return salary;
    }
    public int getID()
    { 
        return id;
    }
    public void setID()
    {
        id=nextId;
        nextId++;
    }
    public static int getNextID()
    {
        return nextId;
    }
    public static void main(String[] args)
    {
        Employee e=new Employee("Grzegorz",50000);
        System.out.println(e.getName()+" "+e.getSalary());
    }
}

    
