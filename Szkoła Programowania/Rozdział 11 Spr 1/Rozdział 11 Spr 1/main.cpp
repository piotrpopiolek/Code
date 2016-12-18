#include <iostream>
#include "stonewt.h"
using namespace std;
void display(const Stonewt &st,int n);
Stonewt operator*(int n,const Stonewt &a);
int main()
{
    Stonewt pepe(10,8);
    pepe.show_stn();
    pepe=pepe*2;
    pepe.show_stn();
    pepe=5*pepe;
    pepe.show_stn();
	system("pause");
    return 0;
}
void display(const Stonewt & st, int n)
{
    for(int i=0; i<n; i++)
        cout<<"Oho! ";
    st.show_stn();
}
Stonewt operator*(int n,const Stonewt &a)
{
    return a*n;
}
