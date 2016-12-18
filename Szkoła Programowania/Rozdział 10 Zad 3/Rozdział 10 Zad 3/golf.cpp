#include<iostream>
#include<string.h>
using namespace std;
const int Len = 30;
class Golf
{
	char fullname[Len];
	int handicap;
public:
	Golf(const char* name = "Nazwa", int hc = 0)
	{
		strcpy(fullname, name);
		handicap = hc;
	}
	~Golf()
	{
		cout << "Destruktor " << fullname << endl;
	}
	void setgolf()
	{
		char text[Len];
		int w;
		cout << "Podaj nazwe gracza: " << endl;
		cin.getline(text, Len);
		cout << "Podaj jego wynik: " << endl;
		cin >> w;
		*this = Golf(text, w);
		strcpy(fullname, text);
		handicap = w;
	}
	void showgolf()
	{
		cout << "Gracz: " << fullname << endl;
		cout << "Wynik: " << handicap << endl;
	}
};
