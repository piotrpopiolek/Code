#include<iostream>
#include"Stos.h"
#include<string>
using namespace std;
int main()
{
	short ch;
	double sum = 0;
	Stack Stos;
	Customer temp;
	while(cin)
	{
		cout << "Co chcesz zrobic?\n";
		cout << "1. Dodaj do stosu\n";
		cout << "2. Zdejmij ze stosu\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
			if (!Stos.isfull())
			{
				cout << "Podaj nazwe klienta:\n";
				cin >> temp.name;
				cout << "Podaj kwote:\n";
				cin >> temp.payment;
				Stos.push(temp);
			}
			else
				cout << "Stos jest pelny" << endl;
			break;
		}
		case 2:
		{
			if (!Stos.isempty())
			{
				cout << "Zdjales z stosu klienta o danych\n";
				Stos.pop(temp);
				cout << "Nazwa: " << temp.name << endl;
				cout << "Stan konta: " << temp.payment << endl;
				sum += temp.payment;
			}
			else
				cout << "Stos jest pusty!\n";
			cout << "Suma wynosi: " << sum << endl;
			break;
		}
		default:
			cout << "Blad " << endl;
			break;
		}
	};
	system("pause");
	return 0;
}