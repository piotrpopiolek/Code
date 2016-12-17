#include<random>
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include"Complex.h"
using namespace std;
double random();
void Zadanie1();
void Zadanie2();
void Zadanie3();
void Zadanie4();
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
double random() 
{
	static default_random_engine e{};
	uniform_real_distribution<double > d;
	return d(e);
}
void Zadanie1()
{
	cout << "Zadanie 1" << endl;
	cout << "Podaj rozmiar tablicy ";
	int rozmiar; cin >> rozmiar;
	vector<double> Tablica(rozmiar);
	for (int i = 0; i < rozmiar; i++)
	{
		Tablica[i] = random();
	}
	ofstream plik1;
	string nazwa_pliku1 = "Zadanie1_a.txt";
	string nazwa_pliku2 = "Zadanie1_b.txt";
	plik1.open(nazwa_pliku1.c_str());
	ofstream plik2(nazwa_pliku2, ios::binary | ios::out);
	if (!plik1.is_open() && !plik2.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku o nazwie: " << nazwa_pliku1 <<" lub "<<nazwa_pliku2 << endl;
		cout << "Byla to proba zapisu do pliku" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	else
	{
		for (auto it : Tablica)
		{
			cout << it << " ";
			plik2.write(reinterpret_cast<char*> (&it), sizeof(it));
			plik1 << it << " ";
		}
		cout << endl;
	}
}
void Zadanie2()
{	
	cout << "Zadanie 2" << endl;
	vector<int> int_Tablica1;
	vector<double> float_Tablica1;
	vector<int> int_Tablica2;
	vector<double> float_Tablica2;

	string filename = "Zadanie1_b.txt";
	ifstream input(filename, ios::binary);
	if (input) {
		int i;
		while (input.read(reinterpret_cast<char*> (&i), sizeof(i)))
			int_Tablica1.push_back(i);
	}
	input.close();

	ifstream input2(filename, ios::binary);
	if (input2) {
		double i;
		while (input2.read(reinterpret_cast<char*> (&i), sizeof(i)))
			float_Tablica1.push_back(i);
	}
	input2.close();

	cout << "Wypisywanie pliku binarnego " << endl;

	cout << "\nWektor typu int: ";
	for (auto it : int_Tablica1) 
	{
		cout << it << " ";
	}

	cout << "\nWektor typu float: ";
	for (auto it : float_Tablica1) 
	{
		cout << it << " ";
	}

	string filename2 = "Zadanie1_a.txt";
	ifstream input3(filename, ios::binary);
	if (input3) 
	{
		int i;
		while (input3.read(reinterpret_cast<char*> (&i), sizeof(i)))
			int_Tablica2.push_back(i);
	}
	input3.close();

	ifstream input4(filename, ios::binary);
	if (input4) 
	{
		double i;
		while (input4.read(reinterpret_cast<char*> (&i), sizeof(i)))
			float_Tablica2.push_back(i);
	}
	input4.close();

	cout << "\n\nWypisywanie pliku tekstowego " << endl;

	cout << "\nWektor typu int: ";
	for (auto it : int_Tablica2) 
	{
		cout << it << " ";
	}

	cout << "\nWektor typu float: ";
	for (auto it : float_Tablica2) 
	{
		cout << it << " ";
	}
	cout << endl;
}
void Zadanie3()
{
	cout << "Zadanie 3" << endl;
	cout << "Podaj pierwsza liczbe zespolona: " << endl;
	double re, lm; cin >> re >> lm;
	Complex A = Create(re, lm);
	cout << "Podaj druga liczbe zespolona: " << endl;
	cin >> re >> lm;
	Complex B = Create(re, lm);
	cout << "Wynik dodawania: "; Show(Add(A, B));
	cout << "Wynik odejmowania: "; Show(Substract(A, B));
	cout << "Wynik mnozenia: "; Show(Multiply(A, B));
	cout << "Czy A rowna sie B?" << endl;
	if (equals(A, B))
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
	cout << "Zadanie 4" << endl;
	const int n = 10;
	Complex Tablica[n];
	string nazwa_pliku1 = "Zadanie4.txt";
	ofstream plik1(nazwa_pliku1, ios::binary | ios::out);
	for (int i = 0; i < n; i++)
	{
		Complex A = Create(random(), random());
		Tablica[i] = A;
		Show(Tablica[i]);
	}
	if (!plik1.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku o nazwie: " << nazwa_pliku1 << endl;
		cout << "Byla to proba zapisu do pliku" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	else
	{
		for (auto it : Tablica)
		{
			plik1.write(reinterpret_cast<char*> (&it), sizeof(it));
		}
		cout << endl;
	}
}
void Zadanie5()
{
	vector<Complex> Tablica;

	string filename = "Zadanie4.txt";
	ifstream input(filename, ios::binary);
	if (input) {
		Complex i;
		while (input.read(reinterpret_cast<char*> (&i), sizeof(i)))
			Tablica.push_back(i);
	}
	input.close();
	for (auto i : Tablica)
	{
		Show(i);
	}
}