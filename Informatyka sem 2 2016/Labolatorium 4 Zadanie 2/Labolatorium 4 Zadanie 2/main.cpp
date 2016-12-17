#include<iostream>
#include"Kolo.h"
#include"Walec.h"
using namespace std;
int main()
{
	Walec A(3, 5);
	cout << "Pole wynosi: " << A.Pole() << endl;
	cout << "Objetosc wynosi: " << A.Objetosc() << endl;
	system("pause");
	return 0;
}