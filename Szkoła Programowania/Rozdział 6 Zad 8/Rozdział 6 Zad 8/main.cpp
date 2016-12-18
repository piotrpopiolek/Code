#include<iostream>
#include<fstream>
int main()
{
	using namespace std;
	ifstream plik; //obiekt obslugujacy ODCZYT z pliku
	string nazwa = "dane.txt";
	plik.open(nazwa);
	char ch;
	int licznik = 0;
	if (!plik.is_open()) // sprawdza czy udalo sie otworzyc plik
	{
		cout << "Nie udalo sie otworzyc pliku\n";
		exit(EXIT_FAILURE);
	}
	while (plik>>ch)
	{
		licznik++;
		cout << ch << " ";
	}
	plik.close();
	cout << "Wczytano " << licznik << " znakow\n";
	system("pause");
	return 0;
}