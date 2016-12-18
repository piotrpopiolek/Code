#include<iostream>
#define ZERO 0
#include<climits>//definicja najwiekszej wartosci int jako INT_MAX
int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "Sam ma " << sam << " dolarow, a Sue ma " << sue;
	cout << " dolarow." << endl << "Do obu kont dodaj 1$." << endl << "Teraz ";
	sam += 1;
	sue += 1;
	cout << "Sam ma " << sam << " dolarow, a Sue ma " << sue;
	cout << " dolarow. \nBiedny Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam ma " << sam << " dolarow, a Sue ma " << sue;
	cout << " dolarow" << endl;
	cout << "Zabierzmy z obu kont 1$." << endl << "Teraz ";
	sam -= 1;
	sue -= 1;
	cout << "Sam ma " << sam << " dolarow, a Sue ma " << sue;
	cout << " dolarow." << endl << "Szczesciara Sue!" << endl;
	system("pause");
	return 0;
}