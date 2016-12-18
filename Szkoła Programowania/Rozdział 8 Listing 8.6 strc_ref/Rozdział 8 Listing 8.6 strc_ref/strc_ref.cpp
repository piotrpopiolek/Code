#include<iostream>
#include<string>
#include<iostream>
using namespace std;
struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};
void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);
int main()
{
	//inicjalizacje czesciowe - reszta skladowych jest zerowana
	free_throws one = { "Ifelsa Branch",13,14 };
	free_throws two = { "Andor Knott",10,16 };
	free_throws three = { "Minnie Max", 7, 9 };
	free_throws four = { "Whily Looper",6,14 };
	free_throws five = { "Long Long",5,9 };
	free_throws team = { "Throwgoods",0,0 };
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);
	//wartosci zwracanych uzyjemy w roli argumentow wywolania
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);
	//wartosci zwracane uzyte w przypisach
	free_throws dup;
	dup = accumulate(team, five);
	cout << "Statystyka dla team:\n";
	display(team);
	cout << "Statystyka dla dup po przypisaniu:\n";
	display(dup);
	set_pc(four);
	//zle skonstruowane przypisanie
	accumulate(dup, five) = four;
	cout << "Statystyka dla dup po omylkowym przypisaniu:\n";
	display(dup);
	system("pause");
	return 0;
}
void display(const free_throws& ft)
{
	cout << "Imie: " << ft.name << endl;
	cout << "Trafionych: " << ft.made << endl;
	cout << "Rzutow: " << ft.attempts << endl;
	cout << "Skutecznosc: " << ft.percent << endl;
}
void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f*float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;
}
free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}