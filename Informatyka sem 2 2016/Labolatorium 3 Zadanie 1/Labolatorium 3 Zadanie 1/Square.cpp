#include "Square.h"
Square::Square()
{
	cout << "Konstruktor klasy Square" << endl;
}
Square::Square(string n, double x) :Rectangle(n, x, x)
{
	cout << "Konstruktor klasy Square" << endl;
}
Square::~Square()
{
	cout << "Destruktor klasy Square" << endl;
}
double Square::Area()
{
	return SetHeight()*SetWidth();
}
