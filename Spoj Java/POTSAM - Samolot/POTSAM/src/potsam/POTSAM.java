/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package potsam;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class POTSAM {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
       Scanner in=new Scanner(System.in);
       int n1=in.nextInt();
       int k1=in.nextInt();
       int n2=in.nextInt();
       int k2=in.nextInt();
       int result=n1*k1+n2*k2;
       System.out.println(result);
    }
    
}
