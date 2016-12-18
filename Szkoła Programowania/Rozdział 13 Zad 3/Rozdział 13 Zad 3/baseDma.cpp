#include "baseDma.h"
baseDma::baseDma(char * s1, int r):base(s1,r)
{

}
baseDma::~baseDma()
{
	cout << "Destruktor klasy base\n";
}
void baseDma::View()
{
	cout << "Tytul: " << getLabel() << endl;
	cout << "Ocena: " << getRating() << endl;
}