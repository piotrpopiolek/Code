#include <iostream>
#include"stonewt.h"
using namespace std;

int main()
{
	Stonewt A(10);
	Stonewt B(15);
	cout << A << endl;
	cout << B << endl;
	cout << "Porownanie: ";
	cout << (A != B) << endl;
	cout << "Porownanie: ";
	cout << (A == B) << endl;
	cout << "Porownanie: ";
	cout << (A > B) << endl;
	cout << "Porownanie: ";
	cout << (A >= B) << endl;
	cout << "Porownanie: ";
	cout << (A < B) << endl;
	cout << "Porownanie: ";
	cout << (A <= B) << endl;
	system("pause");
    return 0;
}
