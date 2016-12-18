#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "Petla sie skonczyla, slowo to " << word << endl;
	system("pause");
	return 0;
}