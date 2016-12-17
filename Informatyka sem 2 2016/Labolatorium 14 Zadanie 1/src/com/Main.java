package com;

import javax.swing.UIManager;
import javax.swing.UnsupportedLookAndFeelException;

import com.Window;

public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		//ustawianie natywnego wyglÄ…du aplikacji
		try {
			// Set System L&F
			UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
		} catch (UnsupportedLookAndFeelException e) {
			// handle exception
		} catch (ClassNotFoundException e) {
			// handle exception
		} catch (InstantiationException e) {
			// handle exception
		} catch (IllegalAccessException e) {
			// handle exception
		}
		
		Window w = new Window();
	}

}