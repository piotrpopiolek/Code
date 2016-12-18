/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package clonetest;

import static java.lang.System.out;

/**
 *
 * @author Lenovo
 */
public class CloneTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try
        {
            Employee original=new Employee("Jan W. Kowalski",50000);
            original.setHireDay(2000,1,1);
            Employee copy=original.clone();
            copy.raiseSalary(10);
            copy.setHireDay(2002,12,31);
            out.println("original = "+original);
            out.println("copy = "+copy);
        }
        catch(CloneNotSupportedException e)
        {
            e.printStackTrance();
        }
    }
    
}
