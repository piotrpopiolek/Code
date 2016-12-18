#include<iostream>
#include<exception>
int main()
{
	using namespace std;
	cin.exceptions(ios_base::failbit);
	cout << "Podaj liczby: ";
	int sum = 0;
	int input;
	try
	{
		while (cin >> input)
		{
			sum += input;
		}
	}
	catch (ios_base::failure & bf)
	{
		cout << bf.what() << endl;
		cout << "O! Tragedia!\n";
	}
	cout << "Ostatnia wprowadzona wartosc = " << input << endl;
	cout << "Suma = " << sum << endl;
	system("pause");
	return 0;
}