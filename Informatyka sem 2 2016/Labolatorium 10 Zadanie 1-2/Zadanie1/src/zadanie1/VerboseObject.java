/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadanie1;

import static java.lang.System.out;

/**
 *
 * @author Lenovo
 */
public class VerboseObject 
{
 private String name;
 public VerboseObject(String name)
 {
     this.name=name;
     out.println("Wywołałes konstruktor obiektu o nazwie: "+name);
 }
protected void finalize()
 {
     out.println("Wywołałes destruktor obiektu o nazwie: "+name);
 }

    void saySomething() 
    {
        out.println("Hello");
    }

}
