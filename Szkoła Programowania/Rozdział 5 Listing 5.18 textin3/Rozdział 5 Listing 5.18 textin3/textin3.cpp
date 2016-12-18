#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail()==false)
	{
		cout << ch << endl;
		++count;
		cin.get(ch);
	}
	cout << endl << "Wczytano " << count << " znakow\n";
	system("pause");
	return 0;
}