#include<iostream>
int main()
{
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "Kod ASCII znaku " << ch << " to " << i << endl;
	cout << "Dodajemy do kodu znaku jedynke: " << endl;
	ch += 1;
	i = ch;
	cout << "Kod ASCII znaku " << ch << " to " << i << endl;
	cout << "Wypisanie char ch za pomoca cout.put(ch): ";
	cout.put(ch);//uzycie metody cout.put() do pokazania znaku
	cout << endl;
	cout.put('!');//uzycie metody cout.put() do pokazania stalej znakowej
	cout << endl;
	cout << "Gotowe" << endl;
	system("pause");
	return 0;
}