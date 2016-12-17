#include<random>
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include"Complex.h"
#include"Samochod.h"
#include"Lista.h"
#include"Student.h"
using namespace std;
double random();
void Zadanie1();
void Zadanie2();
void Zadanie3();
void Zadanie4();
void menu(Lista& L);
void Zadanie5();
int main()
{
	int numer_zadania;
	bool warunek = true;
	while (warunek)
	{
		cout << "Podaj numer zadania 0 konczy program" << endl;
		cin >> numer_zadania;
		switch (numer_zadania)
		{
		case 0:
		{
			warunek = false;
			break;
		}
		case 1:
		{
			Zadanie1();
			break;
		}
		case 2:
		{
			Zadanie2();
			break;
		}
		case 3:
		{
			Zadanie3();
			break;
		}
		case 4:
		{
			Zadanie4();
			break;
		}
		case 5:
		{
			Zadanie5();
			break;
		}
		default:
		{
			cout << "Nie ma takiego zadania!" << endl;
			break;
		}
		}
	}
	system("pause");
	return 0;
}
void Zadanie1()
{
	cout << "Zadanie 1" << endl;
	Complex A = Create(4, 3);
	Complex B = Create(5, 8);
	Complex C = Add(A, B);
	Show(A);
	Show(B);
	Show(C);
}
void Zadanie2()
{
	cout << "Zadanie 2" << endl;
	cout << "Podaj pierwsza liczbe zespolona: " << endl;
	double re, lm; cin >> re >> lm;
	Complex A = Create(re, lm);
	cout << "Podaj druga liczbe zespolona: " << endl;
	cin >> re >> lm;
	Complex B = Create(re, lm);
	cout << "Wynik dodawania: " << A + B;
	cout << "Wynik odejmowania: " << A - B;
	cout << "Wynik mnozenia: " << A * B;
	cout << "Czy A rowna sie B?" << endl;
	if (A==B)
	{
		cout << "Tak" << endl;
	}
	else
	{
		cout << "Nie" << endl;
	}
}
void Zadanie3()
{
	cout << "Zadanie 3" << endl;
	cout << "Podaj pierwsza liczbe zespolona: " << endl;
	Complex A;
	cin >> A;
	cout << "Podaj druga liczbe zespolona: " << endl;
	Complex B;
	cin >> B;
	cout << "Wynik dodawania: " << A + B;
	cout << "Wynik odejmowania: " << A - B;
	cout << "Wynik mnozenia: " << A * B;
	cout << "Czy A rowna sie B?" << endl;
	if (A == B)
	{
		cout << "Tak" << endl;
	}
	else
	{
		cout << "Nie" << endl;
	}
}
void Zadanie4()
{
	Samochod samochod(23.4, 12.0, "Letnie", 1.6, "Benzyna");
	cout << samochod << endl;
}
void Zadanie5()
{
	Lista Studenci;
	Studenci.read();
	menu(Studenci);
	Studenci.save();
}
void menu(Lista& L)
{
	bool warunek = true;
	enum opcje
	{
		dodaj = 1, drukuj, szukaj, usun, skasuj, zakoncz
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