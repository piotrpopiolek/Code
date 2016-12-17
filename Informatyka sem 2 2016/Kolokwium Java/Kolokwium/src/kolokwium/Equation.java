/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Lenovo
 */
package kolokwium;
public class Equation 
{
    private double a;
    private double b;
    private double c;
    private double x1;
    private double x2;
    private double valueX;
    private boolean CzySaPierwiastki=false;
    public Equation(double a,double b,double c)
    {
        this.a=a;
        this.b=b;
        this.c=c;
    }
    public double GetX1() throws RootsNotCalculatedException
    {
        if(CzySaPierwiastki)
            return x1;
        else
            throw new RootsNotCalculatedException("Brak pierwsiastka");
    }
    public double GetX2() throws RootsNotCalculatedException
    {
        if(CzySaPierwiastki)
            return x2;
        else
            throw new RootsNotCalculatedException("Brak pierwsiastka");
    }
    public double GetvalueX()
    {
        return valueX;
    }
    public void findRoots() throws RootsNotCalculatedException
    {
        double delta=b*b-4*a*c;
        if(delta<0)
            throw new RootsNotCalculatedException("Brak rozwiązań w dziedzinie liczb rzeczywistych");
        else if(delta==0)
        {
            CzySaPierwiastki=true;
            x1=x2=-b/2*a;
        }
        else
        {
            CzySaPierwiastki=true;
            x1=(-b-Math.sqrt(delta))/2*a;
            x2=(-b+Math.sqrt(delta))/2*a;
        }
    }
    public void calculate(double x)
    {
        valueX=(a*a*x+b*x+c);
    }
}
class RootsNotCalculatedException extends Exception
{
    public RootsNotCalculatedException(String n)
    {
        super(n);
    }
}