#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
inline void eatline()
{
	while (std::cin.get() != '\n')
		continue;
}
struct planet
{
	char name[20];
	double population;
	double g;
};
const char * file = "planety.dat";
int main()
{
	using namespace std;
	planet pl;
	cout << fixed << right;
	//pokaz poczatkowa zawartosc
	ifstream fin;
	fin.open(file, ios_base::in | ios_base::binary);
	//UWAGA: niektore systemy nie obsluguja trybu ios::binary
	if (fin.is_open())
	{
		cout << "Oto aktualna zawartosc pliku " << file << " file:\n";
		while (fin.read((char *)&pl, sizeof pl))
		{
			cout << setw(20) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(2) << setw(6) << pl.g << endl;
		}
		fin.close();
	}
	//dodaj nowe dane
	ofstream fout(file, ios_base::out | ios_base::binary);
	if (!fout.is_open())
	{
		cerr << "Nie mozna otworzyc pliku " << file << " do zapisu.\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
	cout << "Podaj nazwe planety (aby zakonczyc, wprowadz pusty wiersz):\n";
	cin.get(pl.name, 20);
	while (pl.name[0] != '\0')
	{
		cout << "Podaj zaludnienie planety: ";
		cin >> pl.population;
		cout << "Podaj przyspieszenie grawitacyjne na planecie: ";
		cin >> pl.g;
		eatline();
		fout.write((char *)&pl, sizeof pl);
		cout << "Podaj nazwe planety (aby zakonczyc, wprowadz pusty wiersz):\n";
		cin.get(pl.name, 20);
	}
	fout.close();
	//wyswietl zmieniony plik
	fin.clear(); //instrukcja nie jest konieczna w przypadku niektorych kompilatorow
	fin.open(file, ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cout << "Oto nowa zawartosc pliku " << file << ":\n";
		while (fin.read((char *)&pl, sizeof pl))
		{
			cout << setw(20) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(2) << setw(6) << pl.g << endl;
		}
		fin.close();
	}
	system("pause");
	return 0;
}