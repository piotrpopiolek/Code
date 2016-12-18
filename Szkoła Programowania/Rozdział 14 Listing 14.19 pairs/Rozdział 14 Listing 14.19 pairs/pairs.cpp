#include<iostream>
#include<string>
template<typename T1, typename T2>
class Pair
{
	T1 a;
	T2 b;
public:
	T1 & first();
	T2 & second();
	T1 first() const
	{
		return a;
	}
	T2 second() const
	{
		return b;
	}
	Pair(const T1 & aval,const T2 & bval):a(aval),b(bval){}
	Pair(){}
};
template<typename T1,typename T2>
T1 & Pair<T1, T2>::first()
{
	return a;
}
template<typename T1,typename T2>
T2 & Pair<T1, T2>::second()
{
	return b;
}
int main()
{
	using std::cout;
	using std::endl;
	using std::string;
	Pair<string, int> ratings[4] =
	{
		Pair<string,int>("Pod Czerwonym Baronem",5),
		Pair<string,int>("Szybko i tanio",4),
		Pair<string,int>("Suflety Magdy",5),
		Pair<string,int>("U Gerda",3),
	};
	int joins = sizeof(ratings) / sizeof(Pair<string, int>);
	cout << "Ocena:\t Restauracja:\n";
	for (int i = 0; i < joins; i++)
		cout << ratings[i].second() << ": \t " << ratings[i].first() << endl;
	cout << "Uwaga! Zmiana oceny:\n";
	ratings[3].first() = "U Gerda";
	ratings[3].second() = 6;
	cout << ratings[3].second() << ":\t" << ratings[3].first() << endl;
	system("pause");
	return 0;
}