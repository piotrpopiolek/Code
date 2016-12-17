#include<iostream>
#include"BazaFigur.h"
using namespace std;
int main()
{
	enum Opcje
	{
		Pokaz=1,
		Trojkat,
		Kwadrat,
		Kolo,
		Elipsa,
		Prostokat,
		Sprawdz,
		Zakoncz
	};
	BazaFigur A;
	bool w = true;
	short wybor;
	while (w)
	{
		cout << "Co chcesz zrobic?" << endl;
		cout << "1) Pokaz\t2) Trojkat\t3) Kwadrat\t4) Kolo\t 5) Elipsa\t6) Prostokat\t7) Sprawdz\t8) Zakoncz" << endl;
		cin >> wybor;
		switch (wybor)
		{
		case Pokaz:
		{
			A.Pokaz();
			break;
		}
		case Trojkat:
		{
			cout << "Podaj boki trojkata: " << endl;
			double a, b, c;
			cin >> a >> b >> c;
			A.DodajTrojkat(a, b, c);
			break;
		}
		case Kwadrat:
		{
			cout << "Podaj bok: " << endl;
			double a;
			cin >> a;
			A.DodajKwadrat(a);
			break;
		}
		case Kolo:
		{
			cout << "Podaj promien: "<<endl;
			double r; cin >> r;
			A.DodajKolo(r);
			break;
		}
		case Elipsa:
		{
			cout << "Podaj przekatne: " << endl;
			double a, b;
			cin >> a >> b;
			A.DodajElipse(a, b);
			break;
		}
		case Prostokat:
		{
			cout << "Podaj boki: " << endl;
			double a, b;
			cin >> a >> b;
			A.DodajProstokat(a, b);
			break;
		}
		case Sprawdz:
		{
			cout << "Podaj wspolrzedne punktu: " << endl;
			double x, y;
			cin >> x >> y;
			A.Czy_punkt_nalezy_do_figury(x, y);
			break;
		}
		case Zakoncz:
		{
			cout << "Czy chcesz wyjsc t/n" << endl;
			char a;
			cin >> a;
			a == 't' ? w = false : w = true;
		}
		default:
			break;
		}
	}
	system("pause");
	return 0;
}