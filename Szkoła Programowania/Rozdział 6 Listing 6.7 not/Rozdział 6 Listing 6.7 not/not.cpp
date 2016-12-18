#include<iostream>
#include<climits>
bool is_int(double);
int main()
{
	using namespace std;
	double num;
	cout << "Hej, koles! Rzuc no liczba calkowita: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Poza zakresem - probuj dalej: ";
		cin >> num;
	}
	int val = int(num);
	cout << "Podana liczba  calkowita to " << val << "\nBywaj\n";
	system("pause");
	return 0;
}
bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}