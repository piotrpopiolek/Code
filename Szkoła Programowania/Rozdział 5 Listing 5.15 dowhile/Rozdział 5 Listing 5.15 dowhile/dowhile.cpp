#include<iostream>
int main()
{
	using namespace std;
	int n;
	cout << "Aby poznac moja ulubiona liczbe, podak ";
	cout << "liczby od 1 do 10\n";
	do
	{
		cin >> n;
	} while (n != 7);
	cout << "Tak moja ulubiona liczba to 7.\n";
	system("pause");
	return 0;
}