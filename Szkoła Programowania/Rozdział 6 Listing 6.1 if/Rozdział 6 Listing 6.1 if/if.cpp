#include<iostream>
int main()
{
	using std::cin;
	using std::cout;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << "W zdaniu jest " << spaces << " spacji, a lacznie ";
	cout << total << " znakow.\n";
	system("pause");
	return 0;
}