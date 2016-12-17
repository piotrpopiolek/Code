#include"Silnik.h"
Silnik::Silnik()
{

}
Silnik::Silnik(double poj, std::string typ_p)
{
	pojemnosc = poj;
	typ_paliwa = typ_p;
}
std::ostream& operator<<(std::ostream& stream, const Silnik& K)
{
	stream << "Silnik:\nPojemnosc: " << K.pojemnosc << " Typ paliwa: " << K.typ_paliwa << std::endl;
	return stream;
}