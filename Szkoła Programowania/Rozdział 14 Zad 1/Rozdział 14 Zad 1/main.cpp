#include"Wine.h"
#include<iostream>
using namespace std;
int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	cout << "Podaj nazwe wina: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Podaj liczbe rocznikow: ";
	int yrs;
	cin >> yrs;
	Wine holding(lab, yrs); // Zapisuje nazwe, liczbe roczników i przekazuje
							// informacje o tej liczbie do tablicy
	holding.GetBottles(); // Pobiera dane o roczniku i liczbie butelek
	holding.Show(); // Wyswietla zawartosc obiektu
	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };
	// Tworzy nowy obiekt, inicjalizuje za pomoca danych w tablicach y oraz b
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	//cout << "Laczna liczba butelek wina " << more.Label();
	// Uzywa metody Label!)
	//<< ": " << more.sum() << endl;
	// Uzywa metody sum()
	GetAll();
	cout << "Koniec\n";
	system("pause");
	return 0;
}
