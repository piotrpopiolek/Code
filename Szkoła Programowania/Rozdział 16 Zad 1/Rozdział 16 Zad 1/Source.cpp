#include<iostream>
#include<string>
using namespace std;
bool check(string & temp);
int main()
{
	cout << "Podaj ciag do sprawdzenia:\n";
	string temp; 
	while (cin >> temp)
	{
		if (check(temp))
			cout << temp << " jest palidromem.\n";
		else
			cout << temp << " nie jest palidromem.\n";
		cout << "Podaj ciag do sprawdzenia:\n";
	}
	system("pause");
	return 0;
}
bool check(string & temp)
{
	int i = 0;
	int j = temp.size() - 1;
		while (i < j)
		{
			if (temp[i] != temp[j])
				return false;
			i++;
			j--;
		}
		return true;
}