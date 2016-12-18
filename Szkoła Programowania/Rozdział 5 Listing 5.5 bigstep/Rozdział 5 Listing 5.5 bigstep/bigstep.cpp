#include<iostream>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Podaj liczbe calkowita " << endl;
	int by; cin >> by;
	cout << "Zliczanie co " << by << endl;
	for (int i = 0; i < 1000; i += by)
		cout << i << endl;
	system("pause");
	return 0;
}