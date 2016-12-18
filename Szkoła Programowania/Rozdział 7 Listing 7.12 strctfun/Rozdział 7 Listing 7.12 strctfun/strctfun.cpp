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
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
int main()
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Podaj wartosci x i y: ";
	while (cin >> rplace.x >> rplace.y) //chytre uzycie cin
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Podaj nastepne liczby lub q, aby zakonczyc: ";
	}
	cout << "Gotowe!" << endl;
	system("pause");
	return 0;
}
//zamienia wspolrzedne prostokatne na biegunowe
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}
//pokazuje wspolrzedne biegunowe, radiany przelicza na stopnie
void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577851;
	cout << "odleglosc = " << dapos.distance;
	cout << ", kat = " << dapos.angle*Rad_to_deg;
	cout << " stopni\n";
}