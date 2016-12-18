#include<cstdio>
#include<iostream>
int main()
{
	using namespace std;
	cout << "Ten system moze wygenerowac maksymalne " << TMP_MAX << " nazw tymczasowych skladajacych sie z maksymalnie " << L_tmpnam << " znakow.\n";
	char pszName[L_tmpnam] = { '\0' };
	for (int i = 0; 100 > i; i++)
	{
		tmpnam(pszName);
		cout << pszName << endl;
	}
	system("pause");
	return 0;
}