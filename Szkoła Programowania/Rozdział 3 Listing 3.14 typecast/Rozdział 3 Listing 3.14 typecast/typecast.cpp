#include<iostream>
int main()
{
	using namespace std;
	int auks, bats, coots;
	auks = 19.99 + 11.99; //dodaje wartosci jako typ double a nastepnie konwertuje na typ int
	//te instrukcje dodaja wartosci jako typ int
	bats = (int)19.99 + (int)11.99;//stara skladnia C
	coots = int(19.99) + int(11.99);//nowa skladnia C++
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", cooks = " << coots << endl;
	char ch = 'Z';
	cout << "Kod odpowiadajacy znakowi: " << ch << " to ";
	cout << int(ch) << endl;
	cout << "Tak ten kod to: ";
	cout << static_cast<int>(ch) << endl;
	system("pause");
	return 0;

}