/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nothelloworld;

import java.awt.EventQueue;
import javax.swing.JFrame;

/**
 *
 * @author Lenovo
 */
public class NotHelloWorld 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
       EventQueue.invokeLater(new Runnable()
       {
           public void run()
           {
               JFrame frame=new NotHelloWorldFrame();
               frame.setTitle("NotHelloWorld");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
           }
       });
    }
}
