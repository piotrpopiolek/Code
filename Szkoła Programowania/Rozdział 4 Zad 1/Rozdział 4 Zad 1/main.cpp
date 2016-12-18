#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "Jak masz na imie: ";
	const int roz = 100;
	char imie[roz];
	cin.getline(imie,roz);
	cout << "Jak sie nazywasz: " << endl;
	char nazw[roz];
	cin.getline(nazw, roz);
	cout << "Na jaka ocene zaslugujesz? ";
	int ocena; cin >> ocena;
	cout << "Ile masz lat: ";
	int lat; cin >> lat;
	cout << "Imie: " << imie << endl;
	cout << "Nazwisko: " << nazw << endl;
	cout << "Ocena: " << ocena << endl;
	cout << "Masz " << lat << " lat" << endl;
	system("pause");
	return 0;
}