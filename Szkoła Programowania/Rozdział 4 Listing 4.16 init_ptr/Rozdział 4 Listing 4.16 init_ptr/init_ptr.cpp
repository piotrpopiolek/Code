#include<iostream>
int main()
{
	using namespace std;
	int higgens = 5;
	int* pt = &higgens;
	cout << "Wartosc zmiennej higgens = " << higgens << "; Adres zmiennej higgens = " << &higgens << endl;
	cout << "Wartosc *pt = " << *pt << "; Wartosc pt = " << pt << endl;
	system("pause");
	return 0;
}