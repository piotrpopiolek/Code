/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadpepe1;
 
/**
 *
 * @author s0145667
 */
public class add implements Runnable
{
    private Counter c;
    public add(Counter c)
    {
        this.c=c;
    }
    @Override
    public void run() 
    {
        for(int i=0;i<1000;i++)
            c.add(1);
    }
     
}