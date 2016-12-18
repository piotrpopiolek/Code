/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package kc001;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class KC001 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        int size=3;
        int result=0;
        Scanner in=new Scanner(System.in);
        for(int i=0;i<size;i++)
            result+=in.nextInt();
        System.out.println(result);
    }
}
