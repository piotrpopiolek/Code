#include<iostream>
int main()
{
	using std::cout;
	using std::ios_base;
	float price1 = 20.40;
	float price2 = 1.9 + 8.0 / 9.0;
	cout.setf(ios_base::showpoint);
	cout << "\"Futrzaki\" kosztuja " << price1 << " zl\n";
	cout << "\Smoki\" kosztuja " << price2 << " zl\n";
	cout.precision(4);
	cout << "\"Futrzaki\" kosztuja " << price1 << " zl\n";
	cout << "\Smoki\" kosztuja " << price2 << " zl\n";
	system("pause");
	return 0;
}