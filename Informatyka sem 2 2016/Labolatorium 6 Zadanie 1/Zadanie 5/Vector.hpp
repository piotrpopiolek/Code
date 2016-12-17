#pragma once
#include<iostream>
using namespace std;
template <typename T>
class Vector
{
private:
	size_t dimensions;
	T* data;
public:
	Vector<T>(size_t dim)
	{
		if (dim <= 0)
		{
			throw std::domain_error("Podales rozmiar wektora rowny zero!");
		}
		else
		{
			//dimensions = dim;
			//data = new T[dimensions];
		}
	}
	Vector<T>(const Vector<T> & ob) : dimensions(ob.size()), data(new T[ob.size()])
	{
		for (size_t i = 0; i < ob.size(); i++)
		{
			data[i] = ob[i];
		}
	}
	virtual ~Vector<T>()
	{
		if (data) delete data;
	}

	size_t size() const
	{
		return dimensions;
	}
	T & operator[](size_t index)
	{
		if (index >= dimensions || index < 0)
			throw std::out_of_range("Probujesz odczytac z po za tablicy!");
		return data[index];
	}
	T operator[](size_t index) const
	{
		if (index >= dimensions || index < 0)
			throw std::out_of_range("Probujesz odczytac z po za tablicy!");
		return data[index];
	}
	Vector<T> & operator=(const Vector<T> & ob)
	{
		delete data;
		dimensions = ob.size();
		data = new T[dimensions];
		for (size_t i = 0; i < ob.size(); i++)
		{
			data[i] = ob[i];
		}
		return *this;
	}
};
template<typename T>
Vector<T> operator+(const Vector<T>& a, const Vector<T>& b)
{
	if (a.size() != b.size())
		throw std::out_of_range("Wektory maja rozne rozmiary!");
	Vector<T> c(a.size());
	for (size_t i = 0; i < a.size(); i++) {
		c[i] = a[i] + b[i];
	}
	return c;
}
template<typename T>
Vector<T> operator-(const Vector<T>& a, const Vector<T>& b)
{
	if (a.size() != b.size())
		throw std::out_of_range("Wektory maja rozne rozmiary!");
	Vector<T> c(a.size());
	for (size_t i = 0; i < a.size(); i++) {
		c[i] = a[i] - b[i];
	}
	return c;
}
template<typename T>
bool operator==(const Vector<T>& a, const Vector<T>& b)
{
	if (&a == &b) return true;
	if (a.size() != b.size())
		return false;
	for (size_t i = 0; i < a.size(); i++)
	{
		if (a[i] != b[i]) return false;
	}
	return true;
}
template<typename T>
bool operator!=(const Vector<T>& a, const Vector<T>& b) {
	if (&a != &b) return true;
	if (a.size() == b.size())
		return false;
	for (size_t i = 0; i < a.size(); i++) {
		if (a[i] == b[i]) return false;
	}
	return true;
}
template<typename T>
ostream & operator<<(ostream &os, const Vector<T>& ob)
{
	for (size_t i = 0; i < ob.size(); i++)
		os << ob[i] << "  ";
	return os;
}