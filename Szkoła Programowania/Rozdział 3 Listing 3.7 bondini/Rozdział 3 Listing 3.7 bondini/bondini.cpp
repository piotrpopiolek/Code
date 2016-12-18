#include<iostream>
int main()
{
	using namespace std;
	cout << "\aOperacja \ zostala uruchomiona!\n";
	cout << "Podaj swoj kod agenta:----------\b\b\b\b\b\b\b\b\b\b";
	unsigned long code;
	cin >> code;
	cout << "\aPodales " << code << "\n";
	cout << "\aKodprawny! Prosze realizowac plan Z3!\n";
	system("pause");
	return 0;
}