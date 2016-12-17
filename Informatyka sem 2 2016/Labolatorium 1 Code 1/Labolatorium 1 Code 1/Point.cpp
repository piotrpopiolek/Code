#include "Point.h"



Point::Point()
{
	x = 0.0;
	y = 0.0;
}
Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}
Point Point::add(Point &other)
{
	return Point(x + other.x, y + other.y);
}
double Point::getX() const
{
	return x;
}
double Point::getY() const
{
	return y;
}

Point::~Point()
{
	
}
