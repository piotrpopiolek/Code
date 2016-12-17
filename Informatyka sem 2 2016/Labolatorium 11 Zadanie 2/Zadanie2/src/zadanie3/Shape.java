/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadanie3;

import static java.lang.System.out;

/**
 *
 * @author Lenovo
 */
abstract public class Shape 
{
    private String name;
    public Shape(String n)
    {
        name=n;
    }
    public void setName(String n)
    {
        name=n;
    }
    public String getName()
    {
        return name;
    }
    @Override
    public String toString()
    {
        return "Pole obiektu "+getName()+" wynosi: "+area();
    }
    abstract public double area();
}
