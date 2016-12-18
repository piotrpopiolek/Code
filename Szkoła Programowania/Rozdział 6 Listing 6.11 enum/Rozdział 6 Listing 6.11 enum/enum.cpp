#include<iostream>
enum{red,orange,yellow,green,blue,violet,indigo};
int main()
{
	using namespace std;
	cout << "Podaj kod koloru ( 0 - 6 ): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo)
	{
		switch (code)
		{
		case red: cout << "Red\n"; break;
		case orange: cout << "Orange\n"; break;
		case yellow: cout << "Yellow\n"; break;
		case green: cout << "Green\n"; break;
		case blue: cout << "Blue\n"; break;
		case violet: cout << "Violet\n"; break;
		case indigo: cout << "Indigo\n"; break;
		}
		cout << "Podaj kod koloru ( 0 - 6 ): ";
		cin >> code;
	}
	cout << "Do widzenia!\n";
	system("pause");
	return 0;
}