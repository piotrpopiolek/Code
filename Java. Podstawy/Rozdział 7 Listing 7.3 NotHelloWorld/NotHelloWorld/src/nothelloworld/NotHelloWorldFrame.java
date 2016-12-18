/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nothelloworld;

import javax.swing.JFrame;

/**
 *
 * @author Lenovo
 */
class NotHelloWorldFrame extends JFrame {

    public NotHelloWorldFrame() 
    {
        add(new NotHelloWorldComponent());
        pack();
    }
    
}
