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
public class Student extends Person
{
private String major;    
public Student(String n,String m)
{
    super(n);
    major=m;
}
public String getDescription()
{
    return "Student specjalizacji "+major;
}
}
