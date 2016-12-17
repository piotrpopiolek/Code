package com;

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

public class Window extends JFrame {

	JPanel toolbox = new JPanel();
	Canvas canvas = null;
	JTextField edit = null;
	JMenuBar menu = null;
	
	JTextField rColor;
	JTextField gColor;
	JTextField bColor;
	
	public Window(){
		
		setTitle("InnyPaint"); //tytuĹ‚ okna
		setSize(800, 800); //rozmiar okna
		
		//okno zostanie zamkniÄ™te, domyĹ›lnie byĹ‚oby ukryte:
		setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);
		
		
		//dodanie layoutu do okna
		setLayout(new BorderLayout());
		
		//inicjalizacja menu
		setupMenu();
		
		//inicjalizacja paska narzÄ™dzi
		setupToolbox();
		
		setJMenuBar(menu);
		
		//dodanie panelu na gĂłrze okna
	    add(toolbox, BorderLayout.PAGE_START);
	
	    //inicjalizacja klasy Canvas, przekazanie pola tekstowego jako argumentu w celu pobrania gruboĹ›ci linii
	    canvas = new Canvas(edit, rColor, gColor, bColor);
	    //dodanie pĹ‚Ăłtna na Ĺ›rodku okna
		add(canvas, BorderLayout.CENTER);
		
	
		//utworzenie obiektu nasĹ‚uchujÄ…cego zdarzenia okna
		WindowListener adapter = new WindowAdapter(){
			
			
			@Override
			public void windowClosing(WindowEvent e){
				//wyĹ›wietlenie okna dialogowego
				int ret = JOptionPane.showOptionDialog(Window.this, "Zamknąć?",
						                               "Potwierdzić zamknięcie", 
						                               JOptionPane.YES_NO_OPTION,
						                               JOptionPane.QUESTION_MESSAGE, null, null, null);
			    if(ret == JOptionPane.YES_OPTION)
			    	Window.this.dispose(); //zamkniÄ™cie okna
			    
			    
			}
			
		};
		
		//dodanie nasĹ‚uchu do okna
		addWindowListener(adapter);
		
		setVisible(true); //wyĹ›wietlenie okna
	}

	
	private void setupToolbox(){
		
		//utworzenie przycisku z tekstem "WyczyĹ›Ä‡"
		JButton b = new JButton("Wyczyścić");
		
		//przypisanie akcji do przycisku
		b.addActionListener(new ActionListener(){

			@Override
			public void actionPerformed(ActionEvent arg0) {
				canvas.clear();
			}
			
		});
		toolbox.add(b);
		
		//inicjalizacja pola tekstowego o dĹ‚ugoĹ›ci 4 z zawartoĹ›ciÄ… "1"
		edit = new JTextField("1", 4);
		toolbox.add(edit);
		
		rColor = new JTextField("0", 3);
		gColor = new JTextField("0", 3);
		bColor = new JTextField("0", 3);
		
		toolbox.add(rColor);
		toolbox.add(gColor);
		toolbox.add(bColor);
	}
	
	private void setupMenu(){
	
		//utworzenie paska menu
		menu = new JMenuBar();
		
		//utworzenie menu
        JMenu m = new JMenu("Plik");
        
        //utworzenie elementu w menu
        JMenuItem item = new JMenuItem("Zamknij");
        
        //ustawienie skrĂłtu klawiszowego Ctrl+Q
        item.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_Q, KeyEvent.CTRL_MASK));
        
        //przypisanie akcji do elementu
        item.addActionListener(new ActionListener(){

			@Override
			public void actionPerformed(ActionEvent e) {
				//przekazanie do okna zdarzenia zamkniÄ™cia
				dispatchEvent(new WindowEvent(Window.this, WindowEvent.WINDOW_CLOSING));
			}
        	
        });
		
        //dodanie elementu do menu
        m.add(item);
        
        //dodanie menu do paska
        menu.add(m);
	}
	
	
}