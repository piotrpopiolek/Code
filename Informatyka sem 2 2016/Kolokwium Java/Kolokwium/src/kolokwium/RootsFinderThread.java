/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package kolokwium;

import static java.lang.System.out;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Lenovo
 */
public class RootsFinderThread implements Runnable
{
    private Equation equation;
    public RootsFinderThread(Equation e)
    {
        equation=e;
    }
    @Override
    public void run() 
    {
        try
        {
        out.println("Starting a new thread(roots)");
        equation.findRoots();
        out.println("Stopping a new thread(roots)");
        }
        catch (RootsNotCalculatedException ex)
        {
            ex.getMessage();
        }
    }
    
}
