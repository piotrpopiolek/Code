#include<iostream>
#include<ctime>
int main()
{
	using namespace std;
	cout << "Podaj czas opoznienia w sekundach: ";
	double secs;
	cin >> secs;
	clock_t delay = secs*CLOCKS_PER_SEC; //konwersja na jednostki zegara
	cout << "Zaczynamy\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "gotowe\a\n";
	system("pause");
	return 0;
}