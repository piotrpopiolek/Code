#include "PokerPlayer.h"
PokerPlayer::PokerPlayer(string i,string n):Person(i,n)
{
	srand(time(NULL));
	cout << "Konstruktor PokerPlayer\n";
	Person::Show();
}
PokerPlayer::~PokerPlayer()
{
	cout << "Destruktor PokerPlayer\n";
	Person::Show();
}
int PokerPlayer::Draw()
{
	return rand() & 52;
}
void PokerPlayer::Show()
{
	Person::Show();
	cout << Draw() << endl;
}