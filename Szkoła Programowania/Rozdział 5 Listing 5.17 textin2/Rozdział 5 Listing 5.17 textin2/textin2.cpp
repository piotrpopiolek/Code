#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Podaj znaki; znak # konczy:\n";
	cin.get(ch);
	while (ch!='#')
	{
		cout << ch << endl;
		++count;
		cin.get(ch);
	}
	cout << endl << "Wczytano " << count << " znakow\n";
	system("pause");
	return 0;
}