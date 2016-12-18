#include<iostream>
int main()
{
	using namespace std;
	int ch;
	int count = 0;
	while ((ch=cin.get())!=EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << "Wczytano " << count << " znakow\n";
	system("pause");
	return 0;
}