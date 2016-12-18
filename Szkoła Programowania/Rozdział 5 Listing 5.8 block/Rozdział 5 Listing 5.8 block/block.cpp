#include<iostream>
int main()
{
	using namespace std;
	cout << "Cudowny kalkulator bedzie sumowal i liczyl srednia ";
	cout << "pieciu liczb.\n";
	cout << "Prosze podac 5 liczb" << endl;
	double numer;
	double sam = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Wartosc " << i << ": ";
		cin >> numer;
		sam += numer;
	}
	cout << "Suma: " << sam << endl;
	cout << "Srednia: " << sam / 5 << endl;
	system("pause");
	return 0;
}