#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charr[20];
	string str;
	cout << "Dlugosc lancucha w zmiennej charr przed wprowadzeniem danych: " << strlen(charr) << endl;
	cout << "Dlugosc lancucha w zmiennej str przed wprowadzeniem danych: " << str.size() << endl;
	cout << "Wprowadzenie wiersza tekstu:\n";
	cin.getline(charr, 20); //okreslenie maksymalnej dlugosci
	cout << "Wprowadzono: " << charr << endl;
	cout << "Podaj kolejny wiersz tekstu:\n";
	getline(cin, str); //cin jest parametrem, nie podano dlugosci
	cout << "Wprowadzono: " << str << endl;
	cout << "Dlugosc lancucha w zmiennej charr po wprowadzeniu danych: " << strlen(charr) << endl;
	cout << "Dlugosc lancucha w zmiennej str po wprowadzeniu danych: " << str.size() << endl;
	system("pause");
	return 0;
}