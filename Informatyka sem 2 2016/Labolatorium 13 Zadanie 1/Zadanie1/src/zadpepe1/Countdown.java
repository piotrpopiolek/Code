/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadpepe1;
 
import static java.lang.System.out;
import java.util.Random;
 
/**
 *
 * @author s0145667
 */
public class Countdown implements Runnable
{
    private String name;
    private int limit;
    public Countdown(String n,int l)
    {
        name=n;
        limit=l;
    }
    @Override
    public void run() 
    {
        Random generator=new Random();
        try
        {
        for(int i=limit;i>0;i--)
        {
           out.println(name+ " "+i);
           Thread.sleep(generator.nextInt(990)+10);
        }
        }
        catch(InterruptedException e)
        {
            out.println("Wyjątek");
        }
    }  
}