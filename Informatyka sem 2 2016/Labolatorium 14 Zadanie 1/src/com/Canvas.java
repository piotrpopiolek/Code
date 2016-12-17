package com;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Point;
import java.awt.RenderingHints;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Timer;

import javax.swing.JPanel;
import javax.swing.JTextField;

import com.LinePoint;
import com.Rectangle;

//klasa implementuje interfejsy MouseMotionListener oraz MouseListener
//w celu przechwytywania zdarzeĹ„ zwiÄ…zanych z myszÄ…
public class Canvas extends JPanel implements MouseMotionListener, MouseListener {
    
	private Color black = new Color(0, 0, 0);

	private JTextField edit = null;
	
	private JTextField rColor = null;
	private JTextField gColor = null;
	private JTextField bColor = null;
	
	private long timer;
	
	private List<LinePoint> el = null;
	private List<Rectangle> kwadraty = null;
	
	//pole tekstowe jako parametr w celu pobrania gruboĹ›ci linii
	//niezbyt Ĺ‚adne rozwiÄ…zanie, ale wprowadzenie singletonĂłw mogĹ‚o utrudniÄ‡ odbiĂłr kodu
	public Canvas(JTextField field, JTextField rColor, JTextField gColor, JTextField bColor){
		
		edit = field;
		this.rColor = rColor;
		this.gColor = gColor;
		this.bColor = bColor;
		
		el = new ArrayList<>();
		kwadraty = new ArrayList<>();
		
		setBackground(Color.WHITE); //ustawienie biaĹ‚ego tĹ‚a
		
		//klasa moĹĽe nasĹ‚uchiwaÄ‡ poniĹĽszych zdarzeĹ„, gdyĹĽ implementuje odpowiednie interfejsy
		addMouseMotionListener(this); //przechwytywanie zdarzeĹ„ zwiÄ…zanych z ruchem kursora
		addMouseListener(this); //przechwytywanie zdarzeĹ„ zwiÄ…zanych z pojedyĹ„czymi akcjami myszy
	}
	
	//metoda czyszczÄ…ca pĹ‚Ăłtno
	public void clear(){
		
		//czyszczenie bufora
	    el.clear();
	    kwadraty.clear();
	    
	    //aktualizacja komponentu
		repaint();
	}
	
	//metoda rysujÄ…ca wywoĹ‚ywana przy kaĹĽdorazowym wywoĹ‚aniu metody repaint()
	@Override
	public void paintComponent(Graphics gr){
		super.paintComponent(gr);
		Graphics2D g = (Graphics2D)gr; //pobranie bardziej zaawansowanego obiektu rysujÄ…cego
	
		//ustawienie wygĹ‚adzania
		g.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
		
		//ustawienie koloru
		g.setColor(black);
		
		//rysowanie linii z bufora
		//bufor musi byÄ‡ uĹĽyty, gdyÄ‡ przy kaĹĽdorazowym wywoĹ‚aniu metody super.paintComponent()
		//zawartoĹ›Ä‡ panelu jest czyszczona
		Point last = null;
		for(LinePoint p : el){
			g.setStroke(new BasicStroke(p.stroke)); //ustawienie gruboĹ›ci linii
			
			//jeĹĽeli punkt jest startowy to linia nie jest rysowana
			if(last!=null && p.start != true)
			    g.drawLine(last.x, last.y, p.pos.x, p.pos.y);
			
			last = p.pos;
		}
		
		for(Rectangle p : kwadraty){
			p.draw(g);
		}
		
	}
	
	//metoda wspomagajÄ…ca pobieranie gruboĹ›ci linii z pola tekstowego
	//w przypadku nieprawidĹ‚owej wartoĹ›ci jako gruboĹ›Ä‡ linii przyjmowane jest 1
	public Integer getLineWidth(){
		
		String s = edit.getText();
		Integer val;
		
		try{
		    val = Integer.valueOf(s);
		} catch(NumberFormatException e){
		    val = 1;
		}
		    
	    return val;
	}
	
	public Color getColor(){
				
		String r = rColor.getText();
		String g = gColor.getText();
		String b = bColor.getText();
		Integer valr, valb, valg;
		
		try{
		    valr = Integer.valueOf(r);
		    valg = Integer.valueOf(g);
		    valb = Integer.valueOf(b);
		    
		    return new Color(valr, valg, valb);
		} catch(NumberFormatException e){
		    return new Color(0);
		}
		    
	}

	//metoda interfejsu MouseMotionListener
	//wywoĹ‚ywana podczas poruszania kursorem z jednoczesnym wciĹ›niÄ™ciem przyciku myszy
	@Override
	public void mouseDragged(MouseEvent e) {
		
		//dodanie punktu do bufora wraz z gruboĹ›ciÄ…
		//el.add(new LinePoint(e.getPoint(), false, getLineWidth()));
		
		//ponowne rysowanie panelu
	    repaint();
	}

	//metoda interfejsu MouseMotionListener
	@Override
	public void mouseMoved(MouseEvent e) {
		
	    
	}

	//metoda interfejsu MouseListener
	@Override
	public void mouseClicked(MouseEvent e) {
		timer = e.getWhen();
	}

	//metoda interfejsu MouseListener
	@Override
	public void mouseEntered(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	//metoda interfejsu MouseListener
	@Override
	public void mouseExited(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	//metoda interfejsu MouseListener
	//wywoĹ‚ywana po wciĹ›niÄ™ciu przycisku myszy
	@Override
	public void mousePressed(MouseEvent e) {
		//poinformowanie, ĹĽe zdarzenie zostanie obsĹ‚uĹĽone
		e.consume();
		
		kwadraty.add(new Rectangle(e.getPoint(), getLineWidth(), 100, getColor()));
		repaint();
		
		//dodanie punktu do bufora wraz z gruboĹ›ciÄ… i oznaczenie go jako poczÄ…tek
		//el.add(new LinePoint(e.getPoint(), true, getLineWidth()));
	}

	//metoda interfejsu MouseListener
	@Override
	public void mouseReleased(MouseEvent e) {
		timer = e.getWhen() - timer;
		System.out.println(timer);
	}
	
}