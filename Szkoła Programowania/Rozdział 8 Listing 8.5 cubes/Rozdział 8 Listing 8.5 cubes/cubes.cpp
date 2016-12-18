#include<iostream>
double cube(double);
double refcube(double&);
int main()
{
	using namespace std;
	double x = 3.0;
	cout << cube(x);
	cout << " szescian " << x << endl;
	cout << refcube(x);
	cout << " szescian " << x << endl;
	system("pause");
	return 0;
}
double cube(double a)
{
	a *= a*a;
	return a;
}
double refcube(double &ra)
{
	ra *= ra*ra;
	return ra;
}