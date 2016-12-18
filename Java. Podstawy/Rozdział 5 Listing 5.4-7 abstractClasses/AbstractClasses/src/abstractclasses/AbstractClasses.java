/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package abstractclasses;

import static java.lang.System.out;

/**
 *
 * @author Lenovo
 */
public class AbstractClasses {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Person[] people =new Person[2];
        people[0]=new Employee("Henryk Kwiatek",50000,1989,10,1);
        people[1]=new Student("Maria Mrozowska","informatyka");
        for(Person p: people)
        {
            out.println(p.getName()+", "+p.getDescription());
        }
    }
    
}
