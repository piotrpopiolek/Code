#include "Sinus.h"
#include<cmath>
Sinus::Sinus(double x):Funkcja(x)
{
	
}
Sinus::~Sinus()
{
}
double Sinus::ObliczWartosc()
{
	double sum = 0;
	const int h = 50;
	double
		numerator = ValueX(),
		denominator = 1.0;

	int i;

	for (i = 0; i < h; i++)
	{
		sum += numerator / denominator;
		numerator *= -ValueX() * ValueX();
		denominator *= (2.0 * (double)i + 2.0) * (2.0 * (double)i + 3.0);
	}
	return sum;
}
double Sinus::ObliczWartosc(double x )
{
	double sum = 0;
	const int h = 50;
	double
		numerator = x,
		denominator = 1.0;

	int i;

	for (i = 0; i < h; i++)
	{
		sum += numerator / denominator;
		numerator *= -x * x;
		denominator *= (2.0 * (double)i + 2.0) * (2.0 * (double)i + 3.0);
	}
	return sum;
}
