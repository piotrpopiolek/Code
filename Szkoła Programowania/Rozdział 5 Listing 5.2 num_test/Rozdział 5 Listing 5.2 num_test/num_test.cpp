#include<iostream>
int main()
{
	using namespace std;
	cout << "Podaj wartosc poczatkowa odliczania: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)
		cout << "i = " << i << "\n";
	cout << "Gotowe, bo juz i = " << i << endl;
	system("pause");
	return 0;
}