#include<iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main()
{
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
		case 1: cout << "\a\n";
			break;
		case 2: report(); 
			break;
		case 3: cout << "Szef nigdzie nie wychodzil.\n";
			break;
		case 4: comfort();
			break;
		default: cout << "Nie ma takiej opcji.\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Do zobaczenia!\n";
	system("pause");
	return 0;
}
void showmenu()
{
	cout << "Wybiez 1,2,3,4 albo 5:\n"
		"1) alarm      2) raport\n"
		"3) alibi      4) luzik\n"
		"5) koniec\n";
}
void report()
{
	cout << "To byl naprawde wspanialy tydzien.\n"
		"Sprzedaz wzrosla o 120%, wydatki zmalaly o 35%.\n";
}
void comfort()
{
	cout << "Pracownicy  uwazaja cie za najfajniejszego\n"
		"dyrektora w calej branzy. Zarzad sadzi, ze jestes\n"
		"najlepszym dyrektorem w calym przemysle.\n";
}