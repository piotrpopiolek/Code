/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nothelloworld;

import java.awt.Dimension;
import java.awt.Graphics;
import javax.swing.JComponent;

/**
 *
 * @author Lenovo
 */
public class NotHelloWorldPanel extends JComponent
{
    public static final int MESSAGE_X=75;
    public static final int MESSAGE_Y=100;
    private static final int DEFAULT_WIDTH=300;
    private static final int DEFAULT_HEIGHT=200;
    public void paintComponent(Graphics g)
    {
        g.drawString("To nie jest program Witaj, świecie.",MESSAGE_X,MESSAGE_Y);
    }
    public Dimension getPreferredSize()
    {
        return new Dimension(DEFAULT_WIDTH,DEFAULT_HEIGHT);
    }
}
