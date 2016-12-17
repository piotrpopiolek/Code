/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package kolokwium;

import static java.lang.System.out;
import java.util.ArrayList;

/**
 *
 * @author Lenovo
 */
public class MultiEquation 
{
    private ArrayList<Equation> ListEquation;
    private ArrayList<Thread> ListThreadEquation;
    private ArrayList<Thread> ListThreadEquationCalculate;
    private double valueX;
    private double wynikCalculate=1;
    public MultiEquation()
    {
        ListEquation=new ArrayList<>();
        ListThreadEquation=new ArrayList<>();
        ListThreadEquationCalculate=new ArrayList<>();
        
    }
    public void SetX(double x)
    {
        valueX=x;
    }
    public double GetCalculate()
    {
        return wynikCalculate;
    }
    public void AddEquation(Equation e)
    {
        ListEquation.add(e);
    }
    public void findRoots() throws RootsNotCalculatedException, InterruptedException
    {
        for(Equation i:ListEquation)
        {
            Thread temp=new Thread(new RootsFinderThread(i));
            ListThreadEquation.add(temp);
        }
        for(Thread i:ListThreadEquation)
        {
            i.start();
            i.join();
        }
    }
    public void calculate() throws InterruptedException
    {
        for(Equation i:ListEquation)
        {
            Thread temp=new Thread(new CalculatingThread(i,valueX));
            ListThreadEquationCalculate.add(temp);
        }
        for(Thread i:ListThreadEquationCalculate)
        {
            i.start();
            i.join();
        }
        for(Equation i:ListEquation)
        {
            wynikCalculate*=i.GetvalueX();
        }
    }
    public void Show() throws RootsNotCalculatedException 
    {
        out.println("Wszystkie pierwiastki równań: ");
        for(Equation i:ListEquation)
        {
            out.println(i.GetX1()+" "+i.GetX2());
        }
        out.println("Wartość równań dla zadanego x: ");
        out.println(GetCalculate());
    }
            
}
