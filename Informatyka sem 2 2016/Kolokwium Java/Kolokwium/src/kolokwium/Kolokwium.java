/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package kolokwium;

/**
 *
 * @author Lenovo
 */
public class Kolokwium 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws RootsNotCalculatedException, InterruptedException 
    {
        MultiEquation Tester=new MultiEquation();
        Tester.AddEquation(new Equation(1,2,-15));
        Tester.AddEquation(new Equation(1,2,-3));
        Tester.AddEquation(new Equation(1,2,-3));
        Tester.AddEquation(new Equation(3,-8,-3));
        Tester.AddEquation(new Equation(4,5,-3));
        Tester.findRoots();
        Tester.SetX(0);
        Tester.calculate();
        Tester.Show();
    }
    
}
