#include "Gunslinger.h"
Gunslinger::Gunslinger(string i,string n):Person(i,n)
{
	cout << "Konstruktor Gunslinger\n";
	liczba_naciec = -1;
	czas_reakcji = -1;
	Person::Show();
}
Gunslinger::~Gunslinger()
{
	cout << "Destruktor Gunslinger\n";
	Person::Show();
}
double Gunslinger::Draw()
{
	return czas_reakcji;
}
void Gunslinger::Show()
{
	Person::Show();
	cout << "Ilosc naciec: " << liczba_naciec << endl;
	cout << "Czas reakcji: " << Draw() << endl;
}
int & Gunslinger::SetLiczba()
{
	return liczba_naciec;
}
double & Gunslinger::SetCzas()
{
	return czas_reakcji;
}