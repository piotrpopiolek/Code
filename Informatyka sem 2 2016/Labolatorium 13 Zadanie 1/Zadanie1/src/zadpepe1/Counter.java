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
public class Counter 
{
    protected long count=0;
    public synchronized void add(long value)
    {
        this.count=this.count+value;
    }
    public long getCount()
    {
        return count;
    }
}