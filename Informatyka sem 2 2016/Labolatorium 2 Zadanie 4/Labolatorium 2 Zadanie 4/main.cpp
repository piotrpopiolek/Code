#include"Lista.h"
#include<iostream>
#include<string>
using namespace std;
void menu(Lista& L);
int main()
{
	Lista Studenci;
	Studenci.read();
	menu(Studenci);
	Studenci.save();
	system("pause");
	return 0;
}
void menu(Lista& L)
{
	bool warunek = true;
	enum opcje
	{
		dodaj=1,drukuj,szukaj,usun,skasuj,zakoncz
	};
	short op;
	while (warunek)
	{
		cout << "Baza studentow\n";
		cout << "1) Dodaj studenta \t 2) Drukuj baze \t 3) Szukaj studenta \n4) Usun studenta \t 5) Skasuj baze\t\t 6) Zakoncz\n";
		cin >> op;
		switch (op)
		{
		case dodaj:
		{
			cout << "Podaj imie: ";
			string imie; cin >> imie;
			cout << "Podaj nazwisko: ";
			string nazwisko; cin >> nazwisko;
			cout << "Podaj indeks: ";
			int indeks; cin >> indeks;
			L.add(imie, nazwisko, indeks);
			break;
		}
		case drukuj:
		{
			L.print();
			break;
		}
		case szukaj:
		{
			cout << "Podaj numer indeksu studenta ktorego szukasz: ";
			int numer; cin >> numer;
			L.search(numer);
			break;
		}
		case usun:
		{
			cout << "Podaj numer indeksu studenta ktorego usunac: ";
			int numer; cin >> numer;
			L.delete_student(numer);
			break;
		}
		case skasuj:
		{
			cout << "Czy na pewno chcesz usunac cala baze? t/n: ";
			char czy; cin >> czy;
			if (czy == 't')
				L.delete_all();
			else
			{
				cout << "Dobra decyzja.\n";
			}
			break;
		}
		case zakoncz:
		{
			warunek = false;
			break;
		}
		default:
		{
			cout << "Podales zla wartosc wybierz poprawnie\n";
			break;
		}
		}
	}
}