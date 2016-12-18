/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package plafframe;
import java.awt.event.*;
import javax.swing.*;

/**
 *
 Ramka z panelem zawierającym przyciski zmieniające styl.
 */
public class PlafFrame extends JFrame
{
    private JPanel buttonPanel;
    public PlafFrame()
    {
        buttonPanel=new JPanel();
        UIManager.LookAndFeelInfo[] infos=UIManager.getInstalledLookAndFeels();
        for(UIManager.LookAndFeelInfo info: infos)
        {
            makeButton(info.getName(),info.getClassName());
        }
        add(buttonPanel);
        pack();
    }
    /*
    Tworzy przycisk zmieniający styl. @param name nazwa przycisku @param plafName nazwa klasy stylu
    */
    void makeButton(String name,final String plafName)
    {
        //Dodanie przycisku do panelu.
        JButton button=new JButton(name);
        buttonPanel.add(button);
        //Ustawienie akcji przycisków.
        button.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent event)
            {
                //Akcja przycisku - przełączenie na nowy styl.
                try
                {
                    UIManager.setLookAndFeel(plafName);
                    SwingUtilities.updateComponentTreeUI(PlafFrame.this);
                    pack();
                }
                catch (Exception e)
                {
                    e.printStackTrace();
                }
            }
        });
    }
}
