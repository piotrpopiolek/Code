/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package packagetest;

import static java.lang.System.out;
import static com.horstmann.corejava.*;
/**
 *
 * @author Lenovo
 */
public class PackageTest {

    /**
     * @param args the command line arguments
     */
     public static void main(String[] args)
   {
      // because of the import statement, we don't have to use com.horstmann.corejava.Employee here
      Employee harry = new Employee("Harry Hacker", 50000, 1989, 10, 1);

      harry.raiseSalary(5);

      // because of the static import statement, we don't have to use System.out here
      out.println("name=" + harry.getName() + ",salary=" + harry.getSalary());
   }
    
}
