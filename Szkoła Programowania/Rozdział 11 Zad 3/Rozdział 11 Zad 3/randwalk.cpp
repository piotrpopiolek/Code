#include<iostream>
#include<cstdlib>
#include<ctime>
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps =0;
    double target;
    double dstep;
    int proby;
    cout<<"Podaj ilosc prob: "<<endl;
    cin>>proby;
    int licznik=0;
    cout<<"Podaj dystans: "<<endl;
    cin>>target;
    cout<<"Podaj dlugosc kroku: "<<endl;
    cin>>dstep;
    int suma;
	int minimum = 999999999;
    int maksimum;
    int srednia;
    suma=maksimum=srednia=0;
    while(licznik<proby)
    {
        while(result.magval()<target)
        {
            direction=rand()%360;
            step.reset(dstep,direction,Vector::POL);
            result=result+step;
            steps++;
        }
        suma+=steps;
        if(minimum>steps)
            minimum=steps;
        else if(maksimum<steps)
            maksimum=steps;
        result.polar_mode();
        steps=0;
        result.reset(0.0,0.0);
        licznik++;
    }
    srednia=suma/proby;
    cout<<"Minimum: "<<minimum<<endl;
    cout<<"Maksimum: "<<maksimum<<endl;
    cout<<"Srednia: "<<srednia<<endl;
    cout<<"Suma: "<<suma<<endl;
    cin.clear();
    while(cin.get()!='\n')
        continue;
	system("pause");
    return 0;
}
