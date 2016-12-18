#include<iostream>
#include<cmath>
#include<string>
#include"exc_mean.cpp"
using std::string;
using std::cout;
using std::cin;
using std::endl;
class Demo
{
	string word;
public:
	Demo(const char * str)
	{
		word = str;
		cout << "Obiekt demo " << word << " utworzony\n";
	}
	~Demo()
	{
		cout << "Obiekt demo " << word << " usuniety\n";
	}
	void show() const
	{
		cout << "Obiekt demo " << word << " zyje\n";
	}
};
double hmean(double a, double b);
double gmean(double a, double b);
double means(double a, double b);
int main()
{
	double x, y, z;
	{
		Demo d1("z bloku zagniezdzonego w funkcji main()");
		cout << "Podaj dwie liczby: ";
		while (cin >> x >> y)
		{
			try
			{
				z = means(x, y);
				cout << "Srednia srednich liczb " << x << " i " << y << " wynosi " << z << endl;
				cout << "Podaj kolejna pare liczb:";
			}
			catch (bad_hmean & bg)
			{
				bg.mesg();
				cout << "Sprobuj ponownie.\n";
				continue;
			}
			catch (bad_gmean & hg)
			{
				cout << hg.mesg();
				cout << "Uzyte wartosci: " << hg.v1 << ", " << hg.v2 << endl;
				cout << "Niestety to koniec zabawy.\n";
				break;
			}
		}
		d1.show();
	}
	cin.get();
	cin.get();
	system("pause");
	return 0;
}
double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0*a*b / (a + b);
}
double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a*b);
}
double means(double a, double b)
{
	double am, hm, gm;
	Demo d2("z funkcji means()");
	am = (a + b) / 2.0;
	try
	{
		hm = hmean(a, b);
		gm = gmean(a, b);
	}
	catch (bad_hmean &  bg)
	{
		bg.mesg();
		cout << "Przechwycony w means()\n";
		throw;
	}
	d2.show();
	return(am + hm + gm) / 3.0;
}