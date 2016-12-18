#include<iostream>
#include<string>
using namespace std;
struct dar
{
	string name;
	double war;
};
const int KWOTA = 10000;
int main()
{
	cout << "Ile darczynczow chcesz dodac? \n";
	int ile; cin >> ile;
	dar* Tablica = new dar[ile];
	for (int i = 0; i < ile; i++)
	{
		cout << "Podaj nazwe: \n";
		cin >> Tablica[i].name;
		cout << "Podaj kwote darowizny:\n";
		cin >> Tablica[i].war;
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
	system("pause");
	return 0;
}
