#include<iostream>
const double* f1(const double ar[], int n);
const double* f2(const double[], int);
const double* f3(const double*, int);
int main()
{
	using namespace std;
	double av[3] = { 1112.3,1542.6,2227.9 };
	//wskaznik do funkcji
	const double*(*p1)(const double*, int) = f1;
	auto p2 = f2; //automatyczna dedukcja typow
	cout << "Uzywanie wskaznikow do funckji:\n";
	cout << " adres wartosc zwracana\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
	//pa to tablica wskaznikow
	//auto nie dziala przy inicjalizacja lista
	const double *(*pa[3])(const double*, int) = { f1,f2,f3 };
	//ale dziala przy inicjalizacji pojedyncza wartoscia
	//pb to wskaznik do pierwszego elementu pa
	auto pb = pa;
	cout << "\nUzywanie tablicy wskaznikow do funkcji:\n";
	cout << " adres wartosc zwracana\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	cout << "\nUzywanie tablicy wskaznikow do funkcji:\n";
	cout << " adres wartosc zwracana\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	//a co ze wskaznikiem do tablicy wskaznikow do funkcji?
	cout << "\nUzywanie tablicy wskaznikow do funkcji:\n";
	cout << " adres wartosc zwracana\n";
	//latwy sposob deklarowania pc
	auto pc = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	//trudny sposob deklarowania pol
	const double *(*(*pd)[3])(const double*, int) = &pa;
	//zapisywanie wzroconej wartosci w pdb
	const double* pbd = (*pd)[1](av, 3);
	cout << pbd << ": " << *pbd << endl;
	//albo tak
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
	system("pause");
	return 0;
}
const double* f1(const double* ar, int n)
{
	return ar;
}
const double* f2(const double ar[], int n)
{
	return ar+1;
}
const double* f3(const double ar[], int n)
{
	return ar+2;
}