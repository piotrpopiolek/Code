#include "Binomial.h"
Binomial::Binomial()
{

}
Binomial::Binomial(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}
void Binomial::Solve()
{
	cout << "Wielomian postaci" << endl;
	cout << "a: = " << getA() << endl;
	cout << "b: = " << getB() << endl;
	cout << "c: = " << getC() << endl;
	cout << "Rozwiazania rownania" << endl;
	if (a == 0 && b != 0)
	{
		x1 = -c / b;
	cout << x1 << endl;
	}
	delta = b*b - 4 * a*c;
	if (delta < 0)
	{
		throw no_real_solution("Delta jest ujemna rozwiazanie w dziedzinie liczb urojonych");
	}
	if (delta == 0)
	{
		x1 = x2 = (-b - sqrt(delta)) / 2 * a;
		cout << "X0" << getX1() << endl;
		cout << "X0" << getX2() << endl;
	}
	if (delta > 0)
	{
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);
		cout << "Delta wynosi: " << delta << endl;
		cout << "X1 " << getX1() << " X2 " << getX2() << endl;
	}
	cout << endl;
}
double Binomial::getA()
{
	return a;
}
double Binomial::getB()
{
	return b;
}
double Binomial::getC()
{
	return c;
}
double Binomial::getX1()
{
	return x1;
}
double Binomial::getX2()
{
	return x2;
}
Binomial Binomial::operator+(const Binomial& wielomian)
{
	Binomial sum;
	sum.a = a + wielomian.a;
	sum.b = b + wielomian.b;
	sum.c = c + wielomian.c;
	return sum;
}
Binomial Binomial::operator-(const Binomial& wielomian)
{
	Binomial sum;
	sum.a = a - wielomian.a;
	sum.b = b - wielomian.b;
	sum.c = c - wielomian.c;
	return sum;
}
double Binomial::calculate(double x)
{
	return(a*x*x + b*x + c);
}
Binomial::~Binomial()
{

}
