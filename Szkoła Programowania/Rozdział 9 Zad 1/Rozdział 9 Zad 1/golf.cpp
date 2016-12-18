#include"golf.h"
void setgolf(golf & g, char *name, int hc)
{
	int d = strlen(name);
	int i = 0;
	while (i <= d)
	{
		g.fullname[i] = name[i];
		i++;
	}
	g.handicap = hc;
}
void setgolf(golf &g)
{
	cout << "Podaj nazwe gracza: " << endl;
	cin.getline(g.fullname, Len);
	cout << "Podaj jego wynik: " << endl;
	cin >> g.handicap;
	cin.get();
}
void handicap(golf &g, int hc)
{
	cout << "Zmieniles wynik danego gracza: " << g.fullname << endl;
	g.handicap = hc;
}
void showgolf(const golf & g)
{
	cout << "Gracz: " << g.fullname << endl;
	cout << "Wynik: " << g.handicap << endl;
}
