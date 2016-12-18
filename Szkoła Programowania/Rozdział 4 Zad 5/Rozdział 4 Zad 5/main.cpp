#include<iostream>
using namespace std;
int main()
{
	struct Batonik
	{
		char marka[50];
		double waga;
		int kalorie;
	};
	Batonik snack = { "Mocha Munch",2.3,350 };
	cout << snack.marka << endl;
	cout << snack.waga << endl;
	cout << snack.kalorie << endl;
	system("pause");
	return 0;
}