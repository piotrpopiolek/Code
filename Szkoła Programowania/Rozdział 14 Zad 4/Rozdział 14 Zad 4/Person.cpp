#include "Person.h"
Person::Person(string i,string n):imie(i),nazwisko(n)
{
	cout << "Konstruktor Person\n";
	cout << imie << " " << nazwisko << endl;
}

Person::~Person()
{
	cout << "Destruktor Person\n";
	cout << imie << " " << nazwisko << endl;
}
void Person::Show()
{
	cout << "Imie: " << imie << endl;
	cout << "Nazwisko: " << nazwisko << endl;
}