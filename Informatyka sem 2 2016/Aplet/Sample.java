import java.awt.*;
import java.applet.*;
public class Sample extends Applet 
{
	String msg;
	public void init() 
	{
		setBackground(Color.yellow);
		setForeground(Color.red);
		msg = ”Wewnatrz metody init() –”;
	}
	public void start() 
	{
		msg = msg + ” Wewnatrz metody start() –”;
	}
	public void paint(Graphics g) 
	{
		msg = msg + ” Wewnatrz metody paint().”;
		g.drawString(msg, 100, 30);
	}
}