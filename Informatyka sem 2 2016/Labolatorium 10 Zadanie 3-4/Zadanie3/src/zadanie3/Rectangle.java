/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadanie3;

/**
 *
 * @author Lenovo
 */
public class Rectangle extends Shape
{
    private double width;
    private double height;
    public Rectangle(String n,double w,double h)
    {
        super(n);
        width=w;
        height=h;
    }
    public double area() 
    {
        return width*height;
    }
}
