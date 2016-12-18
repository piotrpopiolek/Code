#include<iostream>
using namespace std;
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Podaj liczbe ludnosci swiata: ";
	unsigned long long sw; cin >> sw;
	cout << "Podaj liczbe ludnosci Polski: ";
	unsigned long long p; cin >> p;
	const double procent = 100;
	double wynik = p*procent/sw;
	cout << "Populacja Polska stanowi " << wynik << " % populacji swiata." << endl;
	system("pause");
	return 0;
}