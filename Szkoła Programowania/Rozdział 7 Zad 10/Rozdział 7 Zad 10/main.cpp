#include<iostream>
using namespace std;
double calculate(double a, double b, double(*pf)(double, double));
double add(double, double);
double harmoniczna(double, double);
double wieksza(double, double);
int main()
{
	const int rozmiar = 3;
	double(*pf[rozmiar])(double, double) = { add,harmoniczna,wieksza };
	for (int i = 0; i < rozmiar; i++)
	{
		cout << calculate(2.5, 10.4, *pf[i]) << endl;
	}
	system("pause");
	return 0;
}
double calculate(double a, double b, double(*pf)(double, double))
{
	return (*pf)(a, b);
}
double add(double a, double b)
{
	return a + b;
}
double harmoniczna(double x, double y)
{
	return ((2.0*x*y) / (x + y));
}
double wieksza(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}