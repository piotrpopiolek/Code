/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package clonetest;

import java.util.Date;
import java.util.GregorianCalendar;

/**
 *
 * @author Lenovo
 */
public class Employee implements Cloneable
{
    private String name;
    private double salary;
    private Date hireDay;
    public Employee(String n,double s)
    {
        name=n;
        salary=s;
        hireDay=new Date(); 
    }
    public Employee clone() throws CloneNotSupportedException
    {
        //Wywołanie metody Object.clone();
        Employee cloned=(Employee) super.clone();
        //Klonowanie pól zmiennych
        cloned.hireDay=(Date) hireDay.clone();
        return cloned;
    }
    public void setHireDay(int year,int month,int day)
    {
        Date newHireDay=new GregorianCalendar(year,month-1,day).getTime();
        //Przykład zmiany pola obiektowego.
        hireDay.setTime(newHireDay.getTime());
    }
    public void raiseSalary(double byPercent)
    {
        double raise=salary*byPercent/100;
        salary+=raise;
    }
    public String toString()
    {
        return "Employee[name = "+name+", salary = "+salary+", hireDay = "+hireDay+"]";
    }
}
