#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string one("Zwyciezca loterii!"); //konstruktor nr 1
	cout << one << endl; //przeciazony operator<<
	string two(20, '&'); //konstruktor nr 2
	cout << two << endl;
	string three(one); //konstruktor nr 3
	cout << three << endl;
	one += "Ups!"; //przeciazony operator +=
	cout << one << endl;
	two = "Przepraszam. To byl ";
	three[10] = 'k';
	string four;
	four = two + three; //przeciazone operatory + i =
	cout << four << endl;
	char alls[] = "Wszystko dobre, co sie dobrze konczy";
	string five(alls, 22); //konstruktor nr 5
	cout << five << "!\n";
	string six(alls + 9, alls + 14); //konstruktor nr 6
	cout << six << ", ";
	string seven(&five[9], &five[14]); //ponownie konstruktor nr 6
	cout << seven << "...\n";
	string eight(four, 20, 9); //konstruktor nr 7
	cout << eight << " w akcji! " << endl;
	system("pause");
	return 0;
}