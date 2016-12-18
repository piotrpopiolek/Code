#pragma once
template <class T1, class T2>
class Pair
{
private:
	T1 Year;
	T2 Bottles;
public:
	T1 & first();
	T2 & second();
	T1 first() const { return  Year; }
	T2 second() const { return  Bottles; }
	Pair(const T1 & aval, const T2 & bval) : Year(aval), Bottles(bval)
	{}
	Pair() {}
};
template<class T1, class T2>
T1 & Pair<T1, T2>::first()
{
	return Year;
}
template<class T1, class T2>
T2 & Pair<T1, T2>::second()
{
	return Bottles;
}