#include<iostream>
using namespace std;
struct pudlo
{
	char producent[40];
	double wysokosc;
	double szerokosc;
	double dlugosc;
	double objetosc;
};
void pokaz(pudlo);
void objetosc(pudlo &);
int main()
{
	pudlo f = 
	{ 
		"Pepe",
		10.8,
		21.123,
		23.1,
		0.0 
	};
	pokaz(f);
	cout << endl;
	objetosc(f);
	pokaz(f);
	system("pause");
	return 0;
}
void pokaz(pudlo p)
{
	cout << p.producent << endl;
	cout << p.dlugosc << endl;
	cout << p.objetosc << endl;
	cout << p.szerokosc << endl;
	cout << p.wysokosc << endl;
}
void objetosc(pudlo & p)
{
	p.objetosc = p.dlugosc*p.szerokosc*p.wysokosc;
}