#include<iostream>
#include"Shape.h"
#include"Rectangle.h"
#include"Square.h"
using namespace std;
int main()
{
	cout << "a) Pola" << endl;;
	Shape Ksztalt("Ksztalt");
	Rectangle Prostokat("Prostokat", 3, 5);
	Square Kwadrat("Kwadrat", 8);
	cout << "Ksztalt.Area() " << Ksztalt.Area() << endl;
	cout << "Prostokat.Area() " << Prostokat.Area() << endl;
	cout << "Kwadrat.Area() " << Kwadrat.Area() << endl;
	cout << "b) Rzutowanie" << endl; //wykonaly sie metody typow na ktory rzutujemy
	Rectangle& Kwadrat_na_Prostokat = Kwadrat;
	cout << "Kwadrat_na_Prostokat.Area() " << Kwadrat_na_Prostokat.Area() << endl;
	Shape& Kwadrat_na_Ksztalt = Kwadrat;
	cout << "Kwadrat_na_Ksztalt.Area() " << Kwadrat_na_Ksztalt.Area() << endl;
	Shape& Prostokat_na_Ksztalt = Prostokat;
	cout << "Prostokat_na_Ksztalt.Area() " << Prostokat_na_Ksztalt.Area() << endl;
	cout << endl;
	Rectangle Prostokat2("Prostokat", 4, 15);
	Square Kwadrat2("Kwadrat", 12);
	cout << "Prostokat.Area() " << Prostokat2.Area() << endl;
	cout << "Kwadrat.Area() " << Kwadrat2.Area() << endl;
	Shape* Kwadrat__Shape = &Kwadrat2;
	cout << "Kwadrat__Shape->Area() " << Kwadrat__Shape->Area() << endl;
	Shape* Prostokat__Ksztalt = &Prostokat2;
	cout << "Prostokat__Ksztalt->Area() " << Prostokat__Ksztalt->Area() << endl;
	//jednak po dodaniu slowa kluczowego virtual dla funckji bazowej wywoluja sie metody z klas pochodnych
	//po zmianie sposobu dziedziczenia klasy Square z Rectangle ich rzutowania nie sa dozwolone 
	//konstruktory wywoluja sie poczawszy od bazowego 
	system("pause");
	return 0;
}