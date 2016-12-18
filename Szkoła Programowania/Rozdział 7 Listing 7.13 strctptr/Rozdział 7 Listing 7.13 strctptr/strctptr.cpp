#include<iostream>
#include<cmath>
struct polar
{
	double distance; //odleglosc od poczatku ukladu
	double angle; //kat wzgledem dodatniej polosi x
};
struct rect
{
	double x; //odleglosc od poczatku ukladu w poziomie
	double y; //odleglosc od poczatku ukladu w pionie
};
void rect_to_polar(const rect* pxy,polar* pda);
void show_polar(const polar* pda);
int main()
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Podaj wartosci x i y: ";
	while (cin >> rplace.x >> rplace.y) //chytre uzycie cin
	{
		rect_to_polar(&rplace,&pplace);
		show_polar(&pplace);
		cout << "Podaj nastepne liczby lub q, aby zakonczyc: ";
	}
	cout << "Gotowe!" << endl;
	system("pause");
	return 0;
}
//zamienia wspolrzedne prostokatne na biegunowe
void rect_to_polar(const rect* pxy, polar* pda)
{
	using namespace std;
	pda->distance = sqrt(pxy->x*pxy->x+pxy->y*pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}
//pokazuje wspolrzedne biegunowe, radiany przelicza na stopnie
void show_polar(const polar* pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577851;
	cout << "odleglosc = " << pda->distance;
	cout << ", kat = " << pda->angle*Rad_to_deg;
	cout << " stopni\n";
}