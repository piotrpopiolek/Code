#include "ElementDrzewa.h"
#include<iostream>
using namespace std;
ElementDrzewa::ElementDrzewa()
{
	rodzic = std::make_unique<ElementDrzewa>(nullptr);
	prawy = std::make_unique<ElementDrzewa>(nullptr);
	lewy = std::make_unique<ElementDrzewa>(nullptr);
	wartosc = 0;
}
ElementDrzewa::ElementDrzewa(std::unique_ptr<ElementDrzewa> r, std::unique_ptr<ElementDrzewa> l, std::unique_ptr<ElementDrzewa> p, int w = 0):wartosc(w)
{
	rodzic = std::make_unique<ElementDrzewa>(r);
	prawy = std::make_unique<ElementDrzewa>(p);
	lewy = std::make_unique<ElementDrzewa>(nullptr);
}
ElementDrzewa::~ElementDrzewa()
{

}
