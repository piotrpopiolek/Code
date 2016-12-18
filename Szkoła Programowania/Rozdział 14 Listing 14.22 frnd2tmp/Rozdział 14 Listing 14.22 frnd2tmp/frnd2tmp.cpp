#include<iostream>
using std::cout;
using std::endl;
template<typename T>
class HasFriend
{
	T item;
	static int ct;
public:
	HasFriend(const T & i) :item(i)
	{
		ct++;
	}
	~HasFriend()
	{
		ct--;
	}
	friend void counts();
	friend void reports(HasFriend<T> &); //parametr w postaci szablonu
};
//kazda specjalizacja ma wlasna statyczna dana skladowa
template<typename T>
int HasFriend<T>::ct = 0;
//funkcja (nie szablon) zaprzyjazniona ze wszystkimi klasami HasFriend<T>
void counts()
{
	cout << "Konkretyzacja int: " << HasFriend<int>::ct << "; ";
	cout << "Konkretyzacja double: " << HasFriend<double>::ct << endl;
}
//funkcja (nie szablon) zaprzyjazniona z klasa HasFriend<int>
void reports(HasFriend<int> & hf)
{
	cout << "HasFriend<int>: " << hf.item << endl;
}
//funkcja (nie szablon) zaprzyjazniona z klasa HasFriend<double>
void reports(HasFriend<double> & hf)
{
	cout << "HasFriend<double>: " << hf.item << endl;
}
int main()
{
	cout << "Brak zadeklarowanych obiektow: ";
	counts();
	HasFriend<int> hfi1(10);
	cout << "Po deklaracji hfi1: ";
	counts();
	HasFriend<int> hfi2(20);
	cout << "Po deklaracji hfi2: ";
	counts();
	HasFriend<double> hfdb(10.5);
	cout << "Po deklaracji hfdb: ";
	counts();
	reports(hfi1);
	reports(hfi2);
	reports(hfdb);
	system("pause");
	return 0;
}