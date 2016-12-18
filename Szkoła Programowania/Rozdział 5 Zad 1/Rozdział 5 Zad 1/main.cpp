#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Podaj zakres sumowania: " << endl;;
	cout << "Liczba a ";
	cin >> a;
	cout << "Liczba b ";
	cin >> b;
	int suma = 0;
	for (; a <= b; a++)
	{
		suma += a;
	}
	cout << "Suma wynosi: " << suma << endl;
	system("pause");
	return 0;
}