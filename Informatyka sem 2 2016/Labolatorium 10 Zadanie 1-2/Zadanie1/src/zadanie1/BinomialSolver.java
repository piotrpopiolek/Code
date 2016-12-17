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
public class BinomialSolver 
{
    private double a;
    private double b;
    private double c;
    private double delta;
    private double x1;
    private double x2;
    private double value;
    public BinomialSolver()
    {
        
    }
    public BinomialSolver(double a,double b,double c)
    {
        this.a=a;
        this.b=b;
        this.c=c;
        this.Solve();
    }
    public double getA()
    {
        return a;
    }
    public double getB()
    {
        return b;
    }
    public double getC()
    {
        return c;
    }
    public double getX1()
    {
        return x1;
    }
    public double getX2()
    {
        return x2;
    }
    public void Solve()
    {
        if (a == 0 && b != 0)
	{
		x1 = -c / b;
	}
	delta = b*b - 4 * a*c;
	if (delta < 0)
	{
		out.println("Delta mniejsza od zera brak rozwiazan w dziedzinie liczb rzeczywistych");
		out.println("Delta wynosi: " + delta );
	}
	if (delta == 0)
	{
		x1 = x2 = (-b - Math.sqrt(delta)) / 2 * a;
	}
	if (delta > 0)
	{
		x1 = (-b - Math.sqrt(delta)) / (2 * a);
		x2 = (-b + Math.sqrt(delta)) / (2 * a);
	}
    }
    public double calculate(double x)
    {
        return(a*x*x + b*x + c);
    }
}
