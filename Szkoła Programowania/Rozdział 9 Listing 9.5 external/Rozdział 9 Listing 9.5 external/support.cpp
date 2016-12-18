#include<iostream>
extern double warning;
//double warning = 0.3; blad kompilacji ponowna definicja
void update(double dt);
void local();
using std::cout;
void update(double dt)
{
	extern double warning;
	warning += dt;
	cout << "Zwiekszam parametr ocieplenia do: " << warning;
	cout << " stopni.\n";
}
void local()
{
	double warning = 0.8;
	cout << "Lokalne ocieplenie wynosi " << warning << " stopni.\n";
	cout << "Ale globalnie ma wartosc " << ::warning;
	cout << " stopni.\n";
}