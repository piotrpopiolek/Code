#include<iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int* p_updates;
	p_updates = &updates;
	//pokazanie wartosci na dwa sposoby
	cout << "Wartosci: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;
	//pokazanie adresu na dwa sposoby
	cout << "Adresy: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;
	//uzycie wskaznika do zmiany wartosci
	*p_updates = *p_updates + 1;
	cout << "Teraz updates = " << updates << endl;
	system("pause");
	return 0;
}