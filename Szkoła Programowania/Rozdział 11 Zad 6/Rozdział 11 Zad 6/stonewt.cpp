#include<iostream>
using std::cout;
#include "stonewt.h"
#include<cmath>
//konstruuje obiekt Stonewt z wartosci typu double
Stonewt::Stonewt(double lbs,Mode Tryb)
{
    tryb=Tryb;
    stone=int(lbs)/Lbs_per_stn; //dzielenie calkowite
    pds_left=int(lbs)%Lbs_per_stn+lbs-int(lbs);
    pounds=lbs;
}
double fmod( double x, double y );
//konstruuje obiekt Stonewt z liczby kamieni i funtow
Stonewt::Stonewt(int stn,double lbs,Mode Tryb)
{
    tryb=Tryb;
    stone=stn;
    if(lbs>=Lbs_per_stn)
    {
        stone+=int(lbs/Lbs_per_stn);
        lbs=fmod(lbs,Lbs_per_stn);
    }
    pds_left=lbs;
    pounds=stn*Lbs_per_stn+lbs;
}
Stonewt::Stonewt()
{
    stone=pounds=pds_left=0;
}
Stonewt::~Stonewt()
{
}
void Stonewt::Lbs()
{
    tryb=LBS;
}
void Stonewt::Stn()
{
    tryb=STN;
}
Stonewt Stonewt::operator+(const Stonewt & ob)
{
    return Stonewt(stone+ob.stone,pds_left+ob.pds_left);
}
Stonewt Stonewt::operator-(const Stonewt & ob)
{
    return Stonewt(stone-ob.stone,pds_left-ob.pds_left);
}
Stonewt Stonewt::operator*(const Stonewt & ob)
{
    return Stonewt(stone*ob.stone,pds_left*ob.pds_left);
}
Stonewt Stonewt::operator*(int n) const
{
    return Stonewt(stone*n,pds_left*n);
}
std::ostream & operator<<(std::ostream &os, const Stonewt & ob)
{
    if(ob.tryb==Stonewt::LBS)
    {
        os<<"LBS "<<ob.tryb<<std::endl;
        os<<"Stone: "<<ob.stone<<std::endl<<"pds_left: "<<ob.pds_left<<std::endl<<std::endl;
    }
    else
    {
        os<<"STN "<<ob.tryb<<std::endl;
        os<<"Pounds: "<<ob.pounds<<std::endl<<std::endl;
    }
    return os;
}
bool Stonewt::operator!=(const Stonewt & ob)
{
	if (pounds != ob.pounds)
		return true;
	else 
		return false;
}
bool Stonewt::operator==(const Stonewt & ob)
{
	if (pounds == ob.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator<(const Stonewt & ob)
{
	if (pounds < ob.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator<=(const Stonewt & ob)
{
	if (pounds <= ob.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator>(const Stonewt & ob)
{
	if (pounds > ob.pounds)
		return true;
	else
		return false;
}
bool Stonewt::operator>=(const Stonewt & ob)
{
	if (pounds >= ob.pounds)
		return true;
	else
		return false;
}