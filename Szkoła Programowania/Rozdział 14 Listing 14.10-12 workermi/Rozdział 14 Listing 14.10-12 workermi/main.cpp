#include<iostream>
#include<cstring>
#include"WorkerMi.h"
const int SIZE = 5;
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;
	Worker * lolas[SIZE];
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Podaj kategorie pracownika:\n" << "k: kelner p: piosenkarz s: spiewajacy kelner w:wyjscie\n";
		cin >> choice;
		while (strchr("kpsw", choice) == NULL)
		{
			cout << "Wpisz k, p, s lub w:";
			cin >> choice;
		}
		if (choice == 'w')
			break;
		switch (choice)
		{
		case 'k': lolas[ct] = new Waiter;
			break;
		case 'p':lolas[ct] = new Singer;
			break;
		case 's':lolas[ct] = new SingingWaiter;
			break;
		}
		cin.get();
		lolas[ct]->Set();
	}
	cout << "\nLista pracownikow:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		lolas[i]->Show();
	}
	for (i = 0; i < ct; i++)
		delete lolas[i];
	system("pause");
	return 0;
}