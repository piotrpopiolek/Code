#include<valarray>
#include<iostream>
#include<ctime>
#include<cstdlib>
using std::valarray;
using std::cout;
using std::endl;
using std::cin;
int main()
{
	const int rozmiar = 5;
	int tab[rozmiar] = { 1,2,3,4,5 };
	valarray<int> Tablica(tab,rozmiar);
	cout << "Tablica 1" << endl;
	for (int i = 0; i < rozmiar; i++)
		cout << Tablica[i] << " ";
	cout << endl;

	cout << "Tablica 2" << endl;
	srand(time(NULL));
	int rozmiar2;
	cout << "Podaj rozmiar tablicy" << endl;
	cin >> rozmiar2;
	valarray<int> Tablica2(rozmiar2);
	for (int i = 0; i < rozmiar2; i++)
		Tablica2[i] = rand() % 100;
	for (int i = 0; i < rozmiar2; i++)
		cout << Tablica2[i] << " ";
	cout << endl;
	cout << "Maksymalna wartosc: "<<Tablica2.max() << endl;
	cout << "Suma tablicy wynosi: " << Tablica2.sum() << endl;
	system("pause");
	return 0;
}