#include<iostream>
#include<string>
#include<valarray>
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
	Pair(const T1 & aval, const T2 & bval) :a(aval), b(bval) {}
	Pair() {}
};
template<typename T1, typename T2>
T1 & Pair<T1, T2>::first()
{
	return a;
}
template<typename T1, typename T2>
T2 & Pair<T1, T2>::second()
{
	return b;
}
int main()
{
	using std::cout;
	using std::endl;
	using std::string;
	const int rozmiar = 10;
	Pair<int,long double> ODWROTNOSC[rozmiar];
	for (int i = 0, j=1; i < rozmiar; i++,j++)
	{
		ODWROTNOSC[i].first() = i+1;
		ODWROTNOSC[i].second() = 1.0/j;
	}
	for (int i = 0; i < rozmiar; i++)
	{
		cout << ODWROTNOSC[i].first() << "\t" << ODWROTNOSC[i].second() << endl;
	}
	system("pause");
	return 0;
}