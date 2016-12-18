#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	while ((ch = cin.get()) != '@')
	{
		if (isdigit(ch));
		else if (islower(ch))
		{
			ch=toupper(ch);
			cout << ch;
		}
		else
		{
			ch=tolower(ch);
			cout << ch;
		}
	}
	system("pause");
	return 0;
}