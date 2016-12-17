#include "ElementDrzewa.h"
#include<iostream>
using namespace std;
ElementDrzewa::ElementDrzewa()
{
	rodzic = lewy = prawy = NULL;
	wartosc = 0;
}
ElementDrzewa::ElementDrzewa(ElementDrzewa* r, ElementDrzewa* l, ElementDrzewa* p, int w):rodzic(r),lewy(l),prawy(p), wartosc(w)
{

}
ElementDrzewa::~ElementDrzewa()
{

}
