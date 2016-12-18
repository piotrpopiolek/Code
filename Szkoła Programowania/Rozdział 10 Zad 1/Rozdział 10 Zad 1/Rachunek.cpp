#include "Rachunek.h"
using namespace std;
Rachunek::Rachunek()
{
	nazwisko = "Nazwisko";
	numer = "Numer";
	saldo = 0.0;
}
Rachunek::Rachunek(string _nazwisko, string _numer, double _saldo)
{
	nazwisko = _nazwisko;
	numer = _numer;
	saldo = _saldo;
}
Rachunek::~Rachunek()
{

}
void Rachunek::pokaz()
{
	cout << nazwisko << endl;
	cout << numer << endl;
	cout << saldo << endl;
}
void Rachunek::dodaj()
{
	cout << "Podaj nazwisko: " << endl;
	cin >> nazwisko;
	cout << "Podaj numer konta: " << endl;
	cin >> numer;
	cout << "Podaj stan konta: " << endl;
	cin >> saldo;
}
bool Rachunek::depozyt(double kwota)
{
	bool warunek = false;
	if (kwota>0)
	{
		saldo += kwota;
		warunek = true;
	}
	return warunek;
}
bool Rachunek::wyplata(double kwota)
{
	bool warunek = false;
	if (saldo >= kwota && kwota>0)
	{
		saldo -= kwota;
		warunek = true;
	}
	else
		cout << "Srodki na koncie:  " << saldo << endl;
	return warunek;
}