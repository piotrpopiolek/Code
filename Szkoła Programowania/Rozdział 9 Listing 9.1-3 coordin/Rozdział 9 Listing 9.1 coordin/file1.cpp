#include<iostream>
#include"coordin.h"
using namespace std;
int main()
{
	rect rplace;
	polar pplace;
	cout << "Podaj wartosci x i y: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Nastepne wspolrzedne (q konczy program): ";
	}
	cout << "Juz!\n";
	system("pause");
	return 0;
}