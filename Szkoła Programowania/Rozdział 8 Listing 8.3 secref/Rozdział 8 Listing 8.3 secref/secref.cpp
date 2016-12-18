#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "adres rats = " << &rats;
	cout << ", adres rodents = " << &rodents << endl;
	int bunnies = 50;
	rodents = bunnies; //czy mozna zmienic referencje?
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout<<", rodents = "<< rodents << endl;
	cout << "adres bunnies = " << &bunnies;
	cout << ", adres rodents = " << &rodents << endl;
	system("pause");
	return 0;
}