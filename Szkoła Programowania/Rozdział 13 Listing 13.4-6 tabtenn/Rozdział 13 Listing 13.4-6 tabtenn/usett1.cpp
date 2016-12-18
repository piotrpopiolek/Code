#include<iostream>
#include"TableTennisPlayer.h"
int main()
{
	using std::cout;
	using std::endl;
	TableTennisPlayer player1("Teresa", "Bogatko", false);
	RatedPlayer rplayer1(1140, "Maciej", "Kaczkowski", true);
	rplayer1.Name(); //obiekt klasy bazowej korzysta z metody klasy bazowej
	if (rplayer1.HasTable())
		cout << ": posiada stol.\n";
	else
		cout << ": nie posiada stolu.\n";
	player1.Name();
	if (player1.HasTable())
		cout << ": posiada stol.\n";
	else
		cout << ": nie posiada stolu.\n";
	cout << "Nazwisko i imie: ";
	rplayer1.Name();
	cout << "; Ranking: " << rplayer1.Rating() << endl;
	//inicjalizacja obiektu klasy RatedPlayer obiektem klasy TableTennisPlayer
	RatedPlayer rplayer2(1212, player1);
	cout << "Nazwisko i imie: ";
	rplayer2.Name();
	cout << "; Ranking: " << rplayer2.Rating() << endl;
	system("pause");
	return 0;
}