package com;

import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.Point;

public class DrawItem {
	public Point pos = null;
	public int stroke = 1;
	public Color color;
	
	public DrawItem(Point pos, int stroke, Color color) {
		this.pos = pos;
		this.stroke = stroke;
		this.color = color;
	}
	
	public void draw(Graphics2D g)
	{
		
	}
}