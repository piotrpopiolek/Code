#include<iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable* ps = new inflatable;
	cout << "Podaj nazwe dmuchanej zabawki: ";
	cin.get(ps->name, 20); //metoda 1 dostepu do pol 
	cout << "Podaj objetosc w stopach szesciennych: ";
	cin >> (*ps).volume; //metoda 2 dostepu do pol
	cout << "Podaj cene (zl): ";
	cin >> ps->price;
	cout << "Nazwa: " << (*ps).name  << endl;
	cout << "Objetosc: " << ps->volume << " stop szesciennych\n";
	cout << "Cena: " << ps->price << " zl" << endl;
	delete ps;
	system("pause");
	return 0;
}