#include <iostream>
#include "stonewt.h"
using namespace std;
void display(const Stonewt &st,int n);
Stonewt operator*(int n,const Stonewt &a);
int main()
{
    Stonewt incognito=275; //inicjalizacja konstruktorem
    Stonewt wolfe(287.5); // rownowaznie instrukcji : Stonewt wolfe=287.5;
    Stonewt talf(21,8);

    cout<<"Celebryta wazyl ";
    incognito.show_stn();
    cout<<"Detektyw wazyl ";
    wolfe.show_stn();
    cout<<"Prezydent wazyl ";
    talf.show_stn();
    incognito=276.8; //konwersja konstruktorem
    talf=325; //rownowazne instrukcji talf=Stonewt(325);
    cout<<"Po obiedzie celebryta wazyl ";
    incognito.show_stn();
    display(talf,2);
    cout<<"A zapasnik jeszcze wiecej \n";
    display(427,2);
    cout<<"Nie pozostal kamien na kamieniu \n";
	system("pause");
    return 0;
}
void display(const Stonewt & st, int n)
{
    for(int i=0; i<n; i++)
        cout<<"Oho! ";
    st.show_stn();
}
