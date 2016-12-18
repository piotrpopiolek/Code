#include<iostream>
using namespace std;
int main()
{
	struct Batonik
	{
		char marka[50];
		double waga;
		int kalorie;
	};
	const int rozmiar = 3;
	Batonik Tablica[rozmiar] =
	{
		{"Baton 1",2.4,10},
		{"Baton 2", 3.5, 32},
		{"Baton 3",4,3}
	};
	for (int i = 0; i < rozmiar; i++)
	{
		cout << Tablica[i].marka << endl;
		cout << Tablica[i].waga << endl;
		cout << Tablica[i].kalorie << endl;
	}
	system("pause");
	return 0;
}