#include"Samochod.h"
Samochod::Samochod()
{

}
Samochod::Samochod(double srednica, double szerokosc, std::string ogumienie, double pojemnosc, std::string typ_paliwa)
{
	kola.srednica = srednica;
	kola.szerokosc = szerokosc;
	kola.ogumienie = ogumienie;
	silnik.pojemnosc = pojemnosc;
	silnik.typ_paliwa = typ_paliwa;
}
std::ostream& operator<<(std::ostream& stream, const Samochod& K)
{
	stream << "Samochod\n" << K.kola << K.silnik << std::endl;
	return stream;
}