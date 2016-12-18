#include<iostream>
int main()
{
	using namespace std;
	const int minuty = 60;
	const int  sekundy = 60;
	cout << "Podaj dlugosc w stopniach,  minutach i sekundach:" << endl;
	cout << "Podaj najpierw stopnie: ";
	double stopnie; cin >> stopnie;
	cout << "Nastepnie podaj minuty stopnia luku: ";
	double m; cin >> m;
	cout << "Na koniec podaj sekundy luku: ";
	double s; cin >> s;
	double wynik = stopnie + (m / minuty) + (s / (minuty*sekundy));
	cout << stopnie << " stopnie " << m << " minuty " << s << " sekundy: " << wynik << " stopni"<<endl;
	system("pause");
	return 0;
}