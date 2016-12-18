#include<iostream>
#include<string>
using namespace std;
const int limit_znakow = 50;
struct car
{
	char name[limit_znakow];
	int  rok;
};
int main()
{
	cout << "Ile samochodow chcesz skatalogowac? ";
	int ile; cin >> ile;
	car* Tablica = new car[ile];
	for (int i = 0; i < ile; i++)
	{
		cout << "Samochod #" << i + 1 << endl;
		cout << "Prosze podac marke: ";
		cin.get();
		cin.getline(Tablica[i].name, limit_znakow);
		cout << "Podaj rocznik: ";
		cin >> Tablica[i].rok;
	}
	for (int i = 0; i < ile; i++)
	{
		cout << Tablica[i].name <<"  "<< Tablica[i].rok << endl;
	}
	system("pause");
	return 0;
}