#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "Petla sie skonczyla, slowo to " << word << endl;
	system("pause");
	return 0;
}