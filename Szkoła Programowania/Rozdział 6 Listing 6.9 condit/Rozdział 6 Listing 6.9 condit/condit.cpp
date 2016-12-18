#include<iostream>
int main()
{
	using namespace std;
	int a, b;
	cout << "Podaj dwie liczby calkowite: ";
	cin >> a >> b;
	cout << "Wieksza z liczb " << a << " i " << b;
	int c = a > b ? a : b;
	cout << " to " << c << endl;
	system("pause");
	return 0;
}