#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Podaj znaki; # konczy wprowadzanie:\n";
	cin >> ch;
	while (ch != '#')
	{
		cout << ch << endl;
		++count;
		cin >> ch;
	}
	cout << endl << "Wczytano " << count << " znakow\n";
	system("pause");
	return 0;
}
