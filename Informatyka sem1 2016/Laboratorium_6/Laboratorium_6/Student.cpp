#include"Student.hpp"
void display(Student &s)
{
	cout << "Imie: " << s.imie << endl;
	cout << "Nazwisko: " << s.nazwisko << endl;
	cout << "Data urodzenia: " << s.data_urodzenia << endl;
	cout << "Indeks: " << s.index << endl;
	cout << endl;
}