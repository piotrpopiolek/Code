#include<iostream>
using namespace std;
long double rekurencja(int n);
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n;i++)
	cout << "Silnia z " << i << " wynosi: " << rekurencja(i) << endl;
	system("pause");
	return 0;
}
long double rekurencja(int n)
{
	if (n < 2)
		return 1;
	return n*rekurencja(n - 1);
}