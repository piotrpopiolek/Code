#include<iostream>
int main()
{
	using namespace std;
	cout << "Podaj liczby: ";
	int sum = 0;
	int input;
	while (cin >> input)
	{
		sum += input;
	}
	cout << "Ostatnia wprowadzona wartosc = " << input << endl;
	cout << "Suma = " << sum << endl;
	system("pause");
	return 0;
}