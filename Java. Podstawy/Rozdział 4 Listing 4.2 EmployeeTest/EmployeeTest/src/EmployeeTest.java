/**
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.*;

/**
 *
 * @author Lenovo
 */
public class EmployeeTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        //Wstawienie trzech obiektow pracownikow do tablicy staff.
        Employee[] staff = new Employee[3];
        staff[0]=new Employee("Jarosław Rybiński",75000,1987,12,15);
        staff[1]=new Employee("Katarzyna Remiszewska",50000,1989,10,1);
        staff[2]=new Employee("Krystyna Kuczyńska",40000,1990,3,15);
        //Zwiekszenie pensji wszystkich pracownikow o 5%
        for(Employee e:staff)
            e.raiseSalary(5);
        //Drukowanie informacji o wszystkich obiektach klasy Employee.
        for(Employee e:staff)
            System.out.println("name="+e.getName()+",salary="+e.getSalary()+",hireDay="+e.getHireDay());
    }
}
class Employee
{
    private String name;
    private double salary;
    private Date hireDay;
    public Employee(String n,double s,int year,int month,int day)
    {
        name=n;
        salary=s;
        GregorianCalendar calendar=new GregorianCalendar(year,month-1,day);
        //W klasie GregorianCalendar styczen ma numer 0.
        hireDay=calendar.getTime();
    }
    public String getName()
    {
        return name;
    }
    public double getSalary()
    {
        return salary;
    }
    public Date getHireDay()
    {
        return hireDay;
    }
    public void raiseSalary(double byPercent)
    {
        double raise=salary*byPercent/100;
        salary+=raise;
    }
}