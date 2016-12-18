#include<iostream>
#include"mytime.h"
int main()
{
	using std::cout;
	using std::endl;
	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;
	cout << "czas pielenia = ";
	weeding.Show();
	cout << endl;
	cout << "czas woskowania = ";
	waxing.Show();
	cout << endl;
	cout << "laczny czas pracy  = ";
	total = weeding + waxing;
	total.Show();
	cout << endl;
	diff = weeding - waxing;
	cout << "czas pielenia - czas woskowania = ";
	diff.Show();
	cout << endl;
	adjusted = total*1.5;
	cout << "czas pracy z poprawka na przerwy = ";
	adjusted.Show();
	cout << endl;
	system("pause");
	return 0;
}