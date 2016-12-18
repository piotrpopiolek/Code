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
	cout << "Podaj rozmiar tablicy ";
	int rozmiar; cin >> rozmiar;
	Batonik* Tablica = new Batonik[rozmiar];
	for (int i = 0; i < rozmiar; i++)
	{
		cout << "Podaj marke ";
		cin >> Tablica[i].marka;
		cout << "Podaj wage ";
		cin >> Tablica[i].waga;
		cout << "Podaj kalorie ";
		cin >> Tablica[i].kalorie;
	}
	for (int i = 0; i < rozmiar; i++)
	{
		cout << Tablica[i].marka << endl;
		cout << Tablica[i].waga << endl;
		cout << Tablica[i].kalorie << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}