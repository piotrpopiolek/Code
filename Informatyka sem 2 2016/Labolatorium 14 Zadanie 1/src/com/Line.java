package com;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.Point;

public class Line extends DrawItem {

	private Point end;
	
	public Line(Point pos, Point end, int stroke, Color color) {
		super(pos, stroke, color);
		this.end = end;
	}
	
	@Override
	public void draw(Graphics2D g)
	{
		g.setStroke(new BasicStroke(this.stroke));
		g.drawLine(pos.x, pos.y, end.x, end.y);
	}
	
}