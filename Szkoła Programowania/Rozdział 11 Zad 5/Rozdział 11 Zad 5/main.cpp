#include <iostream>
#include "stonewt.h"
using namespace std;

int main()
{
    Stonewt a(100);
    Stonewt b(10,5);
    cout << a;
    cout << b;
    Stonewt c;
    c=a*b;
    cout<<c;
    a.Lbs();
    cout << a;
    a.Stn();
    cout << a;
	system("pause");
    return 0;
}
