#include"Port.h"
#include"VintagePort.h"
#include<iostream>
int main()
{
	Port A("Amarena","Zielony",10);
	cout << "Metoda Show()\n";
	A.Show();
	cout << "Strumien <<\n";
	cout << A << endl;
	cout << "Konstruktor kopiujacy\n";
	Port B(A);
	B.Show();
	cout << "Operator przypisananie\n";
	Port C = A;
	C.Show();
	VintagePort Ab("Lesny dzban","Czerwony",4,"Pepe",1993);
	cout << "Metoda Show()\n";
	Ab.Show();
	cout << "Strumien <<\n";
	cout << A << endl;
	cout << "Konstruktor kopiujacy\n";
	VintagePort Bb(Ab);
	Bb.Show();
	cout << "Operator przypisananie\n";
	VintagePort Cb = Ab;
	Cb.Show();
	system("pause");
	return 0;
}