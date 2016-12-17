package com;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.Point;

public class Rectangle extends DrawItem {

	private int size;
	
	public Rectangle(Point pos, int stroke, int size, Color color) {
		super(pos, stroke, color);
		this.size = size;
	}
	
	public void draw(Graphics2D g)
	{
		g.setColor(this.color);
		g.setStroke(new BasicStroke(this.stroke));
		g.drawRect(this.pos.x - this.size/2, this.pos.y - this.size/2, size, size);
	}
}