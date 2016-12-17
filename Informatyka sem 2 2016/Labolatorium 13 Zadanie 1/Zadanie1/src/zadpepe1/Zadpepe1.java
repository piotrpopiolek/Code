/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadpepe1;
 
import static java.lang.System.out;
 
/**
 *
 * @author s0145667
 */
public class Zadpepe1 {
 
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws InterruptedException 
    {
        Thread t1=new Thread(new Countdown("t1",50));
        Thread t2=new Thread(new Countdown("t2",50));
        Thread t3=new Thread(new Countdown("t3",15));
        t1.start();
        t2.start();
        t3.start();
        t1.join();
        t2.join();
        t3.join();
        out.println("Main thread run is over");
        Counter counter=new Counter();
        Thread p1=new Thread(new add(counter));
        Thread p2=new Thread(new add(counter));
        Thread p3=new Thread(new add(counter));
        p1.start();
        p2.start();
        p3.start();
        p1.join();
        p2.join();
        p3.join();
        out.println(counter.getCount());
    }  
}