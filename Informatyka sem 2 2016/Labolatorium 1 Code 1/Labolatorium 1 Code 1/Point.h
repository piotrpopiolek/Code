#pragma once
class Point
{
	double x;
	double y;
public:
	Point();
	Point(double x, double y);
	~Point();
	Point add(Point &other);
	double getX() const;
	double getY() const;
};

