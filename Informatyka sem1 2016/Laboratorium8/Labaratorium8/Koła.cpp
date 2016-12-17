#include"Ko³a.h"
Kola::Kola()
{

}
Kola::Kola(double sre, double sze, std::string ogu)
{
	srednica = sre;
	szerokosc = sze;
	ogumienie = ogu;
}
std::ostream& operator<<(std::ostream& stream, const Kola& K)
{
	stream << "Kolo:\nSrednica: " << K.srednica << " Szerokosc: " << K.szerokosc << " Ogumienie: " << K.ogumienie << std::endl;
	return stream;
}