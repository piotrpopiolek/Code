#include"Person.hpp"
Person createPerson()
{
	Person P;
	cout << "Podaj imie" << endl;
	cin >> P.firstName;
	cout << "Podaj nazwisko" << endl;
	cin >> P.lastName;
	cout << "Podaj wiek" << endl;
	cin >> P.age;
	cout << "Podaj plec" << endl;
	cin >> P.gender;
	return P;
}
void display(const Person &P)
{
	cout << "Imie: " << P.firstName<<" ";
	cout << "Nazwisko: " << P.lastName << " ";
	cout << "Wiek: " << P.age << " ";
	cout << "Plec: " << P.gender << " ";
	cout << endl;
}
