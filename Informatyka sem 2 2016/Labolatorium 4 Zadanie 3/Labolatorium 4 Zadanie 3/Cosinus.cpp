#include "Cosinus.h"
Cosinus::Cosinus(double x):Funkcja(x)
{

}
Cosinus::~Cosinus()
{

}
double Cosinus::ObliczWartosc()
{
	double sum = 0;
	const int h = 100;
	double
		numerator = 1.0,
		denominator = 1.0;

	int i;

	for (i = 0; i < h; i++)
	{
		sum += numerator / denominator;
		numerator *= -ValueX() * ValueX();
		denominator *= ((double)i + 1.0) * ((double)i + 2.0);
	}
	return sum;
}
double Cosinus::ObliczWartosc(double x)
{
	double sum = 0;
	const int h = 50;
	double
		numerator = 1.0,
		denominator = 1.0;

	int i;

	for (i = 0; i < h; i++)
	{
		sum += numerator / denominator;
		numerator *= -x * x;
		denominator *= ((double)i + 1.0) * ((double)i + 2.0);
	}
	return sum;
}