#include<iostream>
#include<cstdlib>
#include<ctime>
#include "vect.h"
#include<fstream>
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
	fstream zapis;
	string dane = "dane.txt";
	zapis.open(dane);
	if (!zapis.is_open()) // sprawdza czy udalo sie otworzyc plik
	{
		cout << "Nie udalo sie otworzyc pliku\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
    cout<<"Podaj dystans do przejscia(k,aby zakonczyc): "<<endl;
    while(cin>>target)
    {
        cout<<"Podaj dlugosc kroku: ";
        if(!(cin>>dstep))
            break;
            zapis<<"Dystans do przejscia: "<<target<<", dlugosc kroku: "<<dstep<<endl;
        while(result.magval()<target)
        {
            direction=rand()%360;
            step.reset(dstep,direction,Vector::POL);
			zapis<<steps<<": "<<result<<endl;
            result=result+step;
            steps++;
        }
		zapis<<"Po "<<steps<<" krokach deliwent osiagnal polozenie:\n";
		zapis<<result<<endl;
        result.polar_mode();
		zapis<<"czyli\n"<<result<<endl;
		zapis<<"Srednia dlugosc kroku pozornego= "<<result.magval()/steps<<endl;
        steps=0;
        result.reset(0.0,0.0);
		cout<<"Podaj dystans do przejscia (k, aby zakonczyc): ";
    }
    cout<<"Koniec!\n";
	zapis.close();
    cin.clear();
    while(cin.get()!='\n')
        continue;
    return 0;
}
