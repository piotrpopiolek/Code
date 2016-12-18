#include<iostream>
using namespace std;
int main()
{
	const int stopy_na_cale = 12;
	const double cale_na_metry = 0.0254;
	const double funty_na_kg = 2.2;
	cout << "Podaj swoj wzrost: " << endl;
	cout << "Podaj stopy: ";
	int stopy; cin >> stopy;
	cout << "Podaj cale: "; 
	int cale; cin >> cale;
	cale += stopy*stopy_na_cale;
	double metry = cale*cale_na_metry;
	cout << "Podaj wage w funtach: ";
	double funty; cin >> funty;
	int kilogramy = funty / funty_na_kg;
	double BMI = kilogramy / (metry*metry);
	cout << "Twoje BMI wynosi: " << BMI << endl;
	system("pause");
	return 0;
}