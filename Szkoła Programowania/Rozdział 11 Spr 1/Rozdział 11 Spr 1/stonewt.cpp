#include<iostream>
using std::cout;
#include "stonewt.h"
#include<cmath>
//konstruuje obiekt Stonewt z wartosci typu double
Stonewt::Stonewt(double lbs)
{
    stone=int(lbs)/Lbs_per_stn; //dzielenie calkowite
    pds_left=int(lbs)%Lbs_per_stn+lbs-int(lbs);
    pounds=lbs;
}
double fmod( double x, double y );
//konstruuje obiekt Stonewt z liczby kamieni i funtow
Stonewt::Stonewt(int stn,double lbs)
{
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
//pokazuje mase w kamieniach
void Stonewt::show_stn() const
{
    cout<<stone<<" kamieni, "<<pds_left<<" funtow\n";
}
//pokazuje mase w funtach
void Stonewt::show_lbs() const
{
    cout<<pounds<<" funtow\n";
}
Stonewt Stonewt::operator*(int n) const
{
    return Stonewt(stone*n,pds_left*n);
}
