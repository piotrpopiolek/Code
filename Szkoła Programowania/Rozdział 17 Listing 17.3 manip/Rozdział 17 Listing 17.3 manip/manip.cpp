#include<iostream>
int main()
{
	using namespace std;
	cout << "Podaj liczbe calkowita: ";
	int n;
	cin >> n;
	cout << "n\t" << n*n << " (dziesietnie)\n";
	cout << hex;
	cout << n << "\t";
	cout << n*n << " (szesnastkowo)\n";
	cout << "oct" << n << "\t" << n*n << " (osemkowo)\n";
	//alternatywny sposob wywolywania manipulatora
	dec(cout);
	cout << n << "\t" << n*n << " (dziesietnie)\n";
	system("pause");
	return 0;
}