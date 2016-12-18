#pragma once
#ifndef WINEC_H_
#define WINEC_H_
#include"Pair.h"
#include<valarray>
#include<iostream>
#include<string>
using ArrayInt = std::valarray<int>;
class Wine:private Pair<ArrayInt,ArrayInt>
{
private:
	using PairArray = Pair<ArrayInt, ArrayInt>;
	std::string label;
	int count;
	PairArray Gatunek;
	static int suma;
public:
	Wine() :Gatunek()
	{}
	// Inicjalizuje skladowe label parametrem l, liczbe lat parametrem y,
	// roczniki parametrem yr[], skladowe bottles parametrem bot[]
	Wine(const char * l, int y, const int yr[], const int bot[]);
	//Inicjalizuje skladowe label parametrem l. liczbe lat parametrem y,
	// tworzy tablice obiektów o dlugosci y
	Wine(const char * l, int y);
	void GetBottles();
	void Show() const;
	std::string & Label();
	friend void GetAll();
};
#endif