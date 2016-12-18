#include<iostream>
#include"Gunslinger.h"
#include"PokerPlayer.h"
#include"BadDude.h"
using std::cin;
int main()
{
	Gunslinger A("Piotr", "Pepe");
	A.Show();
	cout << "Podaj czas reakcji: ";
	cin >> A.SetCzas();
	cout << "Podaj liczbe naciec: ";
	cin >> A.SetLiczba();
	A.Show();
	BadDude B("Adam","Raczyk");
	cout << "Podaj czas reakcji: ";
	cin >> B.SetCzas();
	B.Show();
	system("pause");
	return 0;
}