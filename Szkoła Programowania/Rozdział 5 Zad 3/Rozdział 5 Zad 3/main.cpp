#include<iostream>
using namespace std;
int main()
{
	int suma = 0;
	int a;
	do
	{
		cout << "Podawaj liczby: " << endl;
		cin >> a;
		suma += a;
		cout << "Suma wynosi: " << suma << endl;
	} while (a != 0);
	system("pause");
	return 0;
}