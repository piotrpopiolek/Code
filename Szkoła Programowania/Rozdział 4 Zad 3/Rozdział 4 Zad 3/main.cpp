#include<iostream>
#include<string>
using namespace std;
int main()
{
	string jeden, dwa, trzy;
	cout << "Podaj imie: ";
	cin >> jeden;
	cout << "Podaj nazwisko: ";
	cin >> dwa;
	trzy = jeden + ", " + dwa;
	cout << trzy << endl;
	system("pause");
	return 0;
}