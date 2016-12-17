#include<iostream>
#include"PrimeFinder.h"
#include<cstdlib>
#include<ctime>
#include<climits>
using namespace std;
int main()
{
	PrimeFinder p1(5);
	PrimeFinder p2(6);
	unsigned int zadaj = 3;
	PrimeFinder p3;
	cout << "Najmniejsza liczba pierwsza wieksza od zadanej wynosi: " << p3.DajPierwsza(zadaj) << endl;
	const int ile = 10;
	int licznik_pierwszych = 0;
	srand(time(NULL));
	PrimeFinder Tablica[ile];
	for (int i = 0; i < ile; i++)
	{
		Tablica[i] = rand() % UINT_MAX; //losowanie z maksymalnego zakresu
		if (Tablica[i].flaga)
			licznik_pierwszych++;
	}
	const double P = 100.0;
	double procent = licznik_pierwszych*P/ile;
	cout << "Stosunek wynosi " << procent << " procent liczb pierwszych z zakresu " << ile << " losowan\n";
	system("pause");
	return 0;
}