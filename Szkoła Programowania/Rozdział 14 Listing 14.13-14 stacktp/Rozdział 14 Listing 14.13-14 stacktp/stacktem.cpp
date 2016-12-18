#include<iostream>
#include<string>
#include<cctype>
#include"stacktp.h"
using std::cin;
using std::cout;
using std::string;
int main()
{
	Stack<string> st;
	char ch;
	string po;
	cout << "Wpisz D, aby dodac zamowienie,\nP, aby przetworzyc zamowienie, i Z, aby zakonczyc.\n";
	while (cin >> ch && std::toupper(ch) != 'Z')
	{
		while (cin.get() != '\n')
			continue;
		if (!std::isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'D':
		case 'd':
			cout << "Podaj numer zamowienia: ";
			cin >> po;
			if (st.isfull())
				cout << "Stos pelny\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isempty())
				cout << "Stos pusty\n";
			else
			{
				st.pop(po);
				cout << "Numer zamowienia " << po << " zdjety\n";
				break;
			}
		}
		cout << "Wpisz D, aby dodac zamowienie,\nP, aby przetworzyc zamowienie, i Z, aby zakonczyc.\n";
	}
	system("pasue");
	return 0;
}