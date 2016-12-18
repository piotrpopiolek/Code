/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package employeesorttest;

import java.util.Arrays;

/**
 *
 * @author Lenovo
 */
public class EmployeeSortTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        Employee[] staff=new Employee[3];
        
        staff[0]=new Employee("Henryk Kwiatek",35000);
        staff[1]=new Employee("Karol Kowalski",75000);
        staff[2]=new Employee("Tadeusz Nowak",38000);
        Arrays.sort(staff);
        for(Employee e:staff)
        {
            System.out.println("name = " +e.getName()+", salary = "+e.getSalary());
        }
    }
    
}
