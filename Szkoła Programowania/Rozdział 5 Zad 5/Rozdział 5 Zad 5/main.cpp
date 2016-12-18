#include<iostream>
using namespace std;
int main()
{
	const int rozmiar = 12;
	char* miesiac[rozmiar] =
	{
		"Styczen",
		"Luty",
		"Marzec",
		"Kwiecien",
		"Maj",
		"Czerwiec",
		"Lipiec",
		"Sierpien",
		"Wrzesien",
		"Pazdziernik",
		"Listopad",
		"Grudzien"
	};
	double wynik = 0;
	double ksiazki[rozmiar][2];
	cout << "Podaj ilosc sprzedanych ksiazek w danym miesiacu i cene\n";
	for (int i = 0; i < rozmiar; i++)
	{
		cout << miesiac[i] << ": \n";
		cout << "Ilosc: ";
		cin >> ksiazki[i][0];
		cout << "Cena: ";
		cin >> ksiazki[i][1];
		wynik += ksiazki[i][0] * ksiazki[i][1];
	}
	cout << "W ciagu roku zarobiles: " << wynik << endl;
	cout << "Miesiac   Ilosc   Cena" << endl;
	for (int i = 0; i < rozmiar; i++)
	{
		cout << i+1 << " " << miesiac[i] << " " << ksiazki[i][0] << " " << ksiazki[i][1] << endl;
	}
	system("pause");
	return 0;
}