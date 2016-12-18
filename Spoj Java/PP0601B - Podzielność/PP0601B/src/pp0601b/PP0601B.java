/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp0601b;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class PP0601B {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
       Scanner in=new Scanner(System.in);
       int t=in.nextInt();        
       for(int i=0;i<t;i++)
       {
           int n=in.nextInt();
           int x=in.nextInt();
           int y=in.nextInt();
           for(int j=0;j<n;j++)
           {
               if(j%x==0 && j%y!=0)
               {
                   System.out.print(j);
                   System.out.print(" ");
               }
           }
           System.out.println();
       }
       
    }
    
}
