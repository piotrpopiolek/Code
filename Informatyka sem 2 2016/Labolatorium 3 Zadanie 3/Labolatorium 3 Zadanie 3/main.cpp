#include"Funkcja.h"
#include"FunkcjaLiniowa.h"
#include<iostream>
#include<cmath>
using namespace std;
double bisekcja(FunkcjaLiniowa * obiekt, double p, double k, double d);
int main()
{
	FunkcjaLiniowa A(19.0, 3.0, 4.0);
	FunkcjaLiniowa * wskaznik = &A;
	cout << "Miejsce zerowe wynosi: "<<bisekcja(wskaznik, -4.988, 4000.0, 0.00000000000000001) << endl;
	system("pause");
	return 0;
}
double bisekcja(FunkcjaLiniowa * obiekt, double p, double k, double d)
{
	double x1;
	double temp;
	while(abs(p-k)>d)
	{
		x1 = (p + k) / 2;
		obiekt->SetX(x1);
		std::cout << obiekt->oblicz() << std::endl;
		if (obiekt->oblicz() == 0)
			return x1;
		temp = obiekt->oblicz();
		obiekt->SetX(p);
		if (obiekt->oblicz()*temp < 0)
			k = x1;
		else
			p = x1;
	}
}
