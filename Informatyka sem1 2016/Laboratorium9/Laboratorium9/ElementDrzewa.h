#pragma once
#include<iostream>
#include<memory>
using namespace std;
class ElementDrzewa
{
	std::unique_ptr<ElementDrzewa> lewy;
	std::unique_ptr<ElementDrzewa> prawy;
	std::unique_ptr<ElementDrzewa> rodzic;
	int wartosc;
public:
	friend class BSTree;
	ElementDrzewa();
	ElementDrzewa(std::unique_ptr<ElementDrzewa> r = std::make_unique<ElementDrzewa>(nullptr), std::unique_ptr<ElementDrzewa> l = std::make_unique<ElementDrzewa>(nullptr), std::unique_ptr<ElementDrzewa> p = std::make_unique<ElementDrzewa>(nullptr), int w = 0);
	~ElementDrzewa();
};
