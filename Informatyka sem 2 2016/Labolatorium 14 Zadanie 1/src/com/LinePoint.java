package com;

import java.awt.Point;

//Klasa przechowujÄ…ca parametry punktu linii
public class LinePoint {

	public Point pos = null; //punkt
	public int stroke = 1; //gruboĹ›Ä‡ linii
    public boolean start = true; //czy punkt jest poczÄ…tkiem?
	
    public LinePoint(Point p, boolean st){
    	pos = p;
    	start = st;
    }
    
    public LinePoint(Point p, boolean st, int str){
    	
    	pos = p;
    	start = st;
    	stroke = str;
    	
    }
    
}