#include<iostream>
using namespace std;
void menu()
{
	cout << "r) roslinozerca\t\tp) pianista\n";
	cout << "d) drzewo\t\t g) gra\n";
}
int main()
{
	bool w = true;
	char z;
	while (w)
	{
		menu();
		cin >> z;
		switch (z)
		{
		case 'r':
		{
			cout << "roslinozerca\n";
			w = false;
			break;
		}
		case 'p':
		{
			cout << "pianista\n";
			w = false;
			break;
		}
		case 'd':
		{
			cout << "drzewo\n";
			w = false;
			break;
		}
		case 'g':
		{
			cout << "gra\n";
			w = false;
			break;
		}
		default:
		{
			cout << "Wybiez poprawnie\n";
		}
		}
	}
	system("pause");
	return 0;
}