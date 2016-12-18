#include "BadDude.h"
BadDude::BadDude(string i,string n):Person(i,n)
{
	cout << "Konstruktor BadDude\n";
	Person::Show();
}
BadDude::~BadDude()
{
	cout << "Destruktor BadDude\n";
	Person::Show();
}
double BadDude::Gdraw()
{
	return Gunslinger::Draw();
}
int BadDude::Cdraw()
{
	return PokerPlayer::Draw();
}
void BadDude::Show()
{
	Person::Show();
	cout << "Czas reakcji: " << Gdraw() << endl;
	cout << "Wylosowana karta: " << Cdraw() << endl;
}