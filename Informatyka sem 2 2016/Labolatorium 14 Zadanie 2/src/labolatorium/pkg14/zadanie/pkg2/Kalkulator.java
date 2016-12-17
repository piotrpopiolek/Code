package labolatorium.pkg14.zadanie.pkg2;



import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.KeyStroke;


public class Kalkulator extends JFrame{

	JPanel toolbox = new JPanel();
	JPanel toolbox1 = new JPanel();
	JTextField okno1 = null;
	JTextField okno2 = null;
	JTextField oknoWynik = null;
	JMenuBar menu = null;
	
	public Kalkulator(){
		
		setTitle("Kalkulator "); 
		setSize(300, 250);
		setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);
		setLayout(new BorderLayout());
		setupMenu();
		setupToolbox();
		setJMenuBar(menu);
	    add(toolbox, BorderLayout.PAGE_START);
	    add(toolbox1, BorderLayout.CENTER);
		WindowListener adapter = new WindowAdapter(){	
			
		@Override
		public void windowClosing(WindowEvent e){
			int ret = JOptionPane.showOptionDialog(Kalkulator.this, "Koniec?","Zamykanie",JOptionPane.YES_NO_OPTION,JOptionPane.QUESTION_MESSAGE, null, null, null);
			if(ret == JOptionPane.YES_OPTION)
			    Kalkulator.this.dispose();     
			}
		};
		
		addWindowListener(adapter);
		setVisible(true);
	}

	
	private void setupToolbox(){

		JButton dodaj = new JButton(" + ");
		JButton odejmij = new JButton(" - ");
		JButton pomnoz = new JButton(" * ");
		JButton podziel = new JButton(" / ");
		JButton pot = new JButton(" a^b ");
		
		dodaj.addActionListener(new ActionListener(){
			
		@Override
		public void actionPerformed(ActionEvent arg0) {
			Double wartosc1, wartosc2, wartoscWynik;
			wartosc1=Double.valueOf(okno1.getText());
			wartosc2=Double.valueOf(okno2.getText());
			wartoscWynik=wartosc1+wartosc2;
			oknoWynik.setText(wartoscWynik.toString());	
			}
		});
		
		odejmij.addActionListener(new ActionListener(){

		@Override
		public void actionPerformed(ActionEvent arg0) {
			Double wartosc1, wartosc2, wartoscWynik;
			wartosc1=Double.valueOf(okno1.getText());
			wartosc2=Double.valueOf(okno2.getText());
			wartoscWynik=wartosc1-wartosc2;
			oknoWynik.setText(wartoscWynik.toString());	
			}
		});
		
		pomnoz.addActionListener(new ActionListener(){

		@Override
		public void actionPerformed(ActionEvent arg0) {
			Double wartosc1, wartosc2, wartoscWynik;
			wartosc1=Double.valueOf(okno1.getText());
			wartosc2=Double.valueOf(okno2.getText());
			wartoscWynik=wartosc1*wartosc2;
			oknoWynik.setText(wartoscWynik.toString());	
			}
		});
		
		podziel.addActionListener(new ActionListener(){

		@Override
		public void actionPerformed(ActionEvent arg0) {
			Double wartosc1, wartosc2, wartoscWynik=null;
			wartosc1=Double.valueOf(okno1.getText());
			wartosc2=Double.valueOf(okno2.getText());
			if(wartosc2==0)
			{	try {
					throw new Exception("Nie dziel przez zero!");
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
			else
			{
			wartoscWynik=wartosc1/wartosc2;
			oknoWynik.setText(wartoscWynik.toString());
			}		
		}
		});
		
		pot.addActionListener(new ActionListener(){

			@Override
			public void actionPerformed(ActionEvent arg0) {
				Double wartosc1, wartosc2, wartoscWynik=null;
				wartosc1=Double.valueOf(okno1.getText());
				wartosc2=Double.valueOf(okno2.getText());
				if(wartosc2<0)
				{	try {
						throw new Exception("Wykladnik mniejszy od zera!");
					} catch (Exception e) {
						e.printStackTrace();
					}
				}
				else if (wartosc2==0)
				{
					wartoscWynik=1.0;
					oknoWynik.setText(wartoscWynik.toString());
				}
				else
				{
				wartoscWynik=wartosc1;
				for(int i=1; i<wartosc2;i++)
				wartoscWynik=wartoscWynik*wartosc1;
				oknoWynik.setText(wartoscWynik.toString());
				}		
			}
			});
		
		okno1 = new JTextField("0", 5);
		okno2 = new JTextField("0", 5);
		oknoWynik =new JTextField("0",5);
		toolbox.add(okno1);
		toolbox.add(okno2);
		toolbox.add(oknoWynik);
	
		toolbox1.add(dodaj);
		toolbox1.add(odejmij);
		toolbox1.add(pomnoz);
		toolbox1.add(podziel);
		toolbox1.add(pot);
	}
	
	private void setupMenu(){
	
		menu = new JMenuBar();
        JMenu m = new JMenu("Plik");
        JMenuItem item = new JMenuItem("Zamknij");
        item.addActionListener(new ActionListener(){
		@Override
		public void actionPerformed(ActionEvent e) {
			dispatchEvent(new WindowEvent(Kalkulator.this, WindowEvent.WINDOW_CLOSING));
			}	
        });
        m.add(item);
        menu.add(m);   
	}	
}