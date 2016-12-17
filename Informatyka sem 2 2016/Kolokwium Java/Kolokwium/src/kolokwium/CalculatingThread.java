/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package kolokwium;

import static java.lang.System.out;

/**
 *
 * @author Lenovo
 */
public class CalculatingThread implements Runnable
{
    private Equation equation;
    private double x;
    private double wynikCalculate;
    public CalculatingThread(Equation e,double x)
    {
        equation=e;
        this.x=x;
    }
    public double GetWynik()
    {
        return wynikCalculate;
    }
    @Override
    public void run() 
    {
            out.println("Starting a new thread(roots)");
            equation.calculate(x);
            out.println("Stopping a new thread(roots)");
    }
}
