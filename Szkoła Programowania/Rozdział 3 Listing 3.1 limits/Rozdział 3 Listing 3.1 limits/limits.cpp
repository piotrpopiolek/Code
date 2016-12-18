#include<iostream>
#include<climits>
int main()
{
	using namespace std;
	int n_int = INT_MAX;
	int m_int = INT_MIN;
	short n_short = SHRT_MAX;
	short m_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long m_long = LONG_MIN;
	long long n_llong = LLONG_MAX;
	long long m_llong = LLONG_MIN;
	unsigned long long n_ullong = ULLONG_MAX;
	cout << "int ma " << sizeof(int) << " bajty" << endl;
	cout << "short ma " << sizeof n_short << " bajty" << endl;
	cout << "long ma " << sizeof n_long << " bajty" << endl;
	cout << "long long ma " << sizeof n_llong << " bajty" << endl;
	cout << "unsigned long long: " << sizeof n_ullong << endl;
	cout << "Wartosci maksymalne: " << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	cout << "unsigned long long: " << n_ullong << endl;
	cout << "Wartosci minimalne: " << endl;
	cout << "int: " << m_int << endl;
	cout << "short: " << m_short << endl;
	cout << "long: " << m_long << endl;
	cout << "long long: " << m_llong << endl;
	system("pause");
	return 0;
}