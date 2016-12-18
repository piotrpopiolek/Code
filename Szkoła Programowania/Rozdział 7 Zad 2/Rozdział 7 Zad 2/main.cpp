#include<iostream>
using namespace std;
void wpisz(int Tab[], int & roz);
int srednia(int Tab[], int roz);
void pokaz(int Tab[], int roz);
int main()
{
	const int rozmiar = 10;
	int Tablica[rozmiar];
	int ile = rozmiar;
	wpisz(Tablica,ile);
	cout << "Srednia wynosi: " << srednia(Tablica, ile) << endl;
	pokaz(Tablica, ile);
	system("pause");
	return  0;
}
void wpisz(int Tab[], int & roz)
{
	cout << "Wprowadzaj wyniki: <q> konczy wprowadzanie" << endl;
	int q;
	int i = 0;
	while (cin >> q && i<roz)
	{
		Tab[i] = q;
		i++;
	}
	roz = i;
}
int srednia(int Tab[], int roz)
{
	int sum = 0;
	for (int i = 0; i < roz; i++)
		sum += Tab[i];
	return(sum / roz);
}
void pokaz(int Tab[], int roz)
{
	for (int i = 0; i < roz; i++)
		cout <<i+1<<" "<< Tab[i] << endl;
}