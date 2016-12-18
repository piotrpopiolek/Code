#include<iostream>
#include<array>
using namespace std;
int main()
{
	const int rozmiar = 3;
	array<double, rozmiar> Tablica;
	double suma = 0;
	for (int i = 0; i < rozmiar; i++)
	{
		cout << "Podaj wyniki sprintu: " << i+1 << endl;
		cin >> Tablica[i];
		suma += Tablica[i];
	}
	cout << "Srednia to " << suma / rozmiar << endl;
	for (int i = 0; i < rozmiar; i++)
		cout << Tablica[i] << endl;
	system("pause");
	return 0;
}