#include<iostream>
using namespace std;
int main()
{
	const int ile = 30;
	int temp = ile;
	for (int i = 0; i < ile; i++)
	{
		for (int j = 0; j < ile; j++)
		{
			if (j < temp-1)
				cout << ".";
			else
				cout << "*";
		}
		temp--;
		cout << endl;
	}
	system("pause");
	return 0;
}