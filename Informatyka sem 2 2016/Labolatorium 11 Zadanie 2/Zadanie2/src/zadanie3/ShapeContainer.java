/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadanie3;

import static java.lang.System.out;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author Lenovo
 */
public class ShapeContainer 
{
    private ArrayList<Shape> shapes;
    public ShapeContainer()
    {
        shapes=new ArrayList();
    }
    public void addRectangle(String n,double w,double h)
    {
        shapes.add(new Rectangle(n,w,h));       
    }
    public void addSquare(String n,double w)
    {
        shapes.add(new Square(n,w));
    }
    public void ShowAll()
    {
        for(Shape s:shapes)
        {
            out.println(s.toString());
        }
    }
}
