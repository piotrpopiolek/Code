#include <iostream>
#include "stonewt.h"
using namespace std;
void display(const Stonewt &st,int n);
Stonewt operator*(int n,const Stonewt &a);
int main()
{
	using std::cout;
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;
	cout << "Konwersja na typ double => ";
	cout << "Poppins: " << p_wt << " funtow.\n";
	cout << "Konwersja na typ int => ";
	cout << "Poppins: " << int(poppins) << " funtow.\n";
	system("pause");
    return 0;
}