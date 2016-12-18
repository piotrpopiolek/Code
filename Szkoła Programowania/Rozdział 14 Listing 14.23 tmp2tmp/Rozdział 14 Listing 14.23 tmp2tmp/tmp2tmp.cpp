#include<iostream>
using std::cout;
using std::endl;
template<typename T> void counts();
template<typename T> void report(T &);
template<typename TT>
class HasFriend
{
	TT item;
	static int ct;
public:
	HasFriend(const TT & i) :item(i)
	{
		ct++;
	}
	~HasFriend()
	{
		ct--;
	}
	friend void counts<TT>();
	friend void report<>(HasFriend<TT> &);
};
template<typename T>
int HasFriend<T>::ct = 0;
template<typename T>
void counts()
{
	cout << "Szablon sizeof: " << sizeof(HasFriend<T>) << "; ";
	cout << "Szablon counts(): " << HasFriend<T>::ct << endl;
}
template<typename T>
void report(T & hf)
{
	cout << hf.item << endl;
}
int main()
{
	counts<int>();
	HasFriend<int> hfi1(10);
	HasFriend<int> hfi2(20);
	HasFriend<double> hfdb(10.5);
	report(hfi1); // tworzy funkcje report (HasFriendT<int>&)
	report(hfi2); // tworzy funkcje report (HasFriendT<int>&)
	report(hfdb); // tworzy funkcje report (HasFriendT<double>&)
	cout << "Wynik dzialania counts<int>(): \n";
	counts<int>();
	cout << "Wynik dzialania counts<double>(): \n";
	counts<double>();
	system("pause");
	return 0;
}