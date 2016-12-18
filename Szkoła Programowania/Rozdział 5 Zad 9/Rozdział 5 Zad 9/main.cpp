#include<iostream>
#include<cstring>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	string slowo;
	int licznik = 0;
	int i = 0;
	cout << "Podawaj slowa (kiedy skonczysz, napisz gotowe)" << endl;
	do
	{
		cin >> slowo;
		licznik++;
	}while(slowo!="gotowe");
	cout << "Podano " << licznik << " slow" << endl;
	system("pause");
	return 0;
}