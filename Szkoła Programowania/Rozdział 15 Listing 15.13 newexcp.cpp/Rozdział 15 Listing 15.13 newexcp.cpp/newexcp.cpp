#include<iostream>
#include<new>
#include<cstdlib>
using namespace std;
struct Big
{
	double stuff[20000];
};
int main()
{
	Big * pb;
	try
	{
		cout << "Proba przydzialu wielkiego bloku pamieci:\n";
		pb = new Big[10000];
		cout << "Udalo sie przebrnac przez instrukcje new:\n";
	}
	catch (bad_alloc & ba)
	{
		cout << "Przechwycilem wyjatek!\n";
		cout << ba.what() << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Udalo sie przydzielic pamiec\n";
	pb[0].stuff[0] = 4;
	cout << pb[0].stuff[0] << endl;
	delete[] pb;
	system("pause");
	return 0;
}
