/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package employeesorttest;

/**
 *
 * @author Lenovo
 */
public class Employee implements Comparable<Employee>
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
 public int compareTo(Employee other)
 {
     return Double.compare(salary, other.salary);
 }
}
