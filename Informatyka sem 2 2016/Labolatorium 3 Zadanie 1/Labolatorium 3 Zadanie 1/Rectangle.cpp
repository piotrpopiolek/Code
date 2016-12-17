#include "Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle()
{
	cout << "Konstruktor klasy Rectangle" << endl;
}
Rectangle::Rectangle(string n, double w, double h) : height(h), width(w), Shape()
{
	cout << "Konstruktor klasy Rectangle" << endl;
}
double Rectangle::SetWidth()
{
	return width;
}
double Rectangle::SetHeight()
{
	return height;
}
Rectangle::~Rectangle()
{
	cout << "Destruktor klasy Shape" << endl;
}
double Rectangle::Area()
{
	return height*width;
}
