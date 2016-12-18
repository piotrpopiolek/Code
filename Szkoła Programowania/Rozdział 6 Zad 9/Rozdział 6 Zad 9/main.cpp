#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct dar
{
	string name;
	double war;
};
const int KWOTA = 10000;
ifstream plik;
int main()
{
	plik.open("dane.txt");
	if (!plik.is_open())
	{
		cout << "Blad otwarcia pliku\n";
		exit(EXIT_FAILURE);
	}
	int ile; plik >> ile;
	dar* Tablica = new dar[ile];
	for (int i = 0; i < ile; i++)
	{
		plik >> Tablica[i].name;
		plik >> Tablica[i].war;
	}
	bool w = true;
	cout << "Nasi wspaniali sponsorzy:\n";
	for (int i = 0; i < ile; i++)
	{
		if (Tablica[i].war >= KWOTA)
		{
			cout << Tablica[i].name << " \t" << Tablica[i].war << endl;
			w = false;
		}
	}
	if (w)
		cout << "Brak" << endl;
	w = true;
	cout << "Nasi sponsorzy:\n";
	for (int i = 0; i < ile; i++)
	{
		if (Tablica[i].war < KWOTA)
		{
			cout << Tablica[i].name << " \t" << Tablica[i].war << endl;
			w = false;
		}
	}
	if (w)
		cout << "Brak" << endl;
	plik.close();
	system("pause");
	return 0;
}
