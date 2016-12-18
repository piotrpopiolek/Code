#include<iostream>
#include<array>
using namespace std;
int main()
{
	const int rozmiar = 10;
	array <double, rozmiar> Tablica = { 0 };
	double srednia = 0;
	double suma = 0;
	int i = 0;
	bool w = true;
	do
	{
		cout << "Podaj wartosc do tablicy nr " << i << endl;
		if (i < rozmiar && cin >> Tablica[i])
			i++;
		else
			w = false;
	} while ( w );
	for (int j = 0; j < i; j++)
	{
		cout << Tablica[j] << " ";
		suma += Tablica[j];
	}
	srednia = suma / i;
	cout << endl << "Srednia to: " << srednia << endl;
	for (int k = 0; k < i; k++)
	{
		if (Tablica[k] >= srednia)
			cout << Tablica[k] << " ";
	}
	system("pause");
	return 0;
}