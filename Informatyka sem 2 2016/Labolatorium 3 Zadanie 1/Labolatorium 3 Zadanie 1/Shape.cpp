#include "Shape.h"
#include<iostream>
using namespace std;
Shape::Shape()
{
	cout << "Konstruktor klasy Shape" << endl;
}
Shape::Shape(string n) :name(n)
{
	cout << "Konstruktor klasy Shape" << endl;
}


Shape::~Shape()
{
	cout << "Destruktor klasy Shape" << endl;
}
double Shape::Area()
{
	return 0;
}