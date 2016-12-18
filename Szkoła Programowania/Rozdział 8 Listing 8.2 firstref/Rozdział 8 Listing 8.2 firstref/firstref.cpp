#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats; //rodents to referencja
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "adres rats = " << &rats;
	cout << ", adres rodents = " << &rodents << endl;
	system("pause");
	return 0;
}