#include "BazaFigur.h"
BazaFigur::BazaFigur()
{
	index = 0;
}
BazaFigur::~BazaFigur()
{
	for (int i = 0; i < index; i++)
		delete Tablica[i];
}
void BazaFigur::DodajElipse(double a, double b)
{
	Elipsa* nowy = new Elipsa(a, b);
	Tablica[index] = nowy;
	index++;
}
void BazaFigur::DodajKolo(double r)
{
	Kolo* nowy = new Kolo(r);
	Tablica[index] = nowy;
	index++;
}
void BazaFigur::DodajProstokat(double a, double b)
{
	Prostokat* nowy = new Prostokat(a, b);
	Tablica[index] = nowy;
	index++;
}
void BazaFigur::DodajKwadrat(double a)
{
	Kwadrat* nowy = new Kwadrat(a);
	Tablica[index] = nowy;
	index++;
}
void BazaFigur::DodajTrojkat(double a, double b, double c)
{
	Trojkat* nowy = new Trojkat(a, b, c);
	Tablica[index] = nowy;
	index++;
}
void BazaFigur::Pokaz()
{
	for (int i = 0; i < index; i++)
	{
		cout << "Nazwa: " << Tablica[i]->GetName() << endl;
		cout << "Pole: " <<Tablica[i]->Pole() << endl;
		cout << "Obwod: " << Tablica[i]->Obwod() << endl;
		cout << endl;
	}
}
void BazaFigur::Czy_punkt_nalezy_do_figury(double x, double y)
{
	for (int i = 0; i < index; i++)
	{
		if (Tablica[i]->Czy_Zawiera(x, y))
		{
			cout << "Nazwa: " << Tablica[i]->GetName() << endl;
			cout << "Pole: " << Tablica[i]->Pole() << endl;
			cout << "Obwod: " << Tablica[i]->Obwod() << endl;
			cout << endl;
		}
	}
}
