/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ptcltz;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class PTCLTZ 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++)
        {
            int s=in.nextInt();
            int result=Callatz(s);
            System.out.println(result);
        }
    }
    private static int Callatz(int s)
    {
        int n=0;
        int x=s;
        if(x==1)
            return n;
        if(x%2!=0)
        {
            n++;
            x=Callatz(x-1)/2;
        }
        else
        {
            n++;
            x=3*Callatz(x-1)+1;
        }
    }
}
