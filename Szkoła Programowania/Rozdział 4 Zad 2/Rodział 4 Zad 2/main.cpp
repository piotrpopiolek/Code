#include<iostream>
#include<string>
int main()
{
	using namespace std;
	const int ArSize = 20;
	string name;
	string dessert;
	cout << "Podaj swoje imie: \n";
	cin>>name;//wczytuje dane do znaku nowego wiersza
	cout << "Podaj swoj ulubiony deser: \n";
	cin >> dessert;
	cout << "Mam dla ciebie " << dessert;
	cout << ", " << name << ".\n";
	system("pause");
	return 0;
}