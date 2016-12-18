#include<iostream>
using namespace std;
const int ssize = 100;
struct zpdw
{
	char imie[ssize];
	char stanowisko[ssize];
	char pseudonim[ssize];
	int preferencje;
};
void menu();
zpdw Tablica[3] =
{
	{
		"Piotr",
		"Szef",
		"Pepe",
		1
	},
	{
		"Marek",
		"Boss",
		"Mak",
		2
	},
	{
		"Adam",
		"Pomoc",
		"Aa",
		3
	}
};
int main()
{
	char z;
	cout << "Jak pokazac tablice?\n";
	menu();
	cin >> z;
	switch (z)
	{
	case 'a':
	{
		for (int i = 0; i < 3; i++)
			cout << Tablica[i].imie << endl;
		break;
	}
	case 'b':
	{
		for (int i = 0; i < 3; i++)
			cout << Tablica[i].stanowisko << endl;
		break;
	}
	case 'c':
	{
		for (int i = 0; i < 3; i++)
			cout << Tablica[i].pseudonim << endl;
		break;
	}
	case 'd':
	{
		for (int i = 0; i < 3; i++)
			cout << Tablica[i].preferencje << endl;
		break;
	}
	case 'q':
	{
			cout << "Koniec" << endl;
	}
	}
	system("pause");
	return 0;
}
void menu()
{
	cout << "a. imion\t\tb. stanowisk\n";
	cout << "c. pseudonimum\t\td. preferencji\n";
	cout << "q. koniec\n";
}