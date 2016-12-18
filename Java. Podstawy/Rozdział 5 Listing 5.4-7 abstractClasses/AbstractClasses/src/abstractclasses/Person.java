/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package abstractclasses;

/**
 *
 * @author Lenovo
 */
public abstract class Person 
{
public abstract String getDescription();
private String name;
public Person(String n)
{
    name=n;
}
public String getName()
{
    return name;
}
}
