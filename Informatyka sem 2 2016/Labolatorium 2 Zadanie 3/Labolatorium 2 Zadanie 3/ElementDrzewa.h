#pragma once
#include<iostream>
using namespace std;
class ElementDrzewa
{
	ElementDrzewa* lewy;
	ElementDrzewa* prawy;
	ElementDrzewa* rodzic;
	int wartosc;
public:
	friend class BSTree;
	ElementDrzewa();
	ElementDrzewa(ElementDrzewa* r = NULL, ElementDrzewa* l = NULL, ElementDrzewa* p = NULL, int w = 0);
	~ElementDrzewa();
};
