#include<iostream>
#include<cfloat>
bool hmean(double a, double b, double * ans);
int main()
{
	double x, y, z;
	std::cout << "Podaj dwie liczby: ";
	while (std::cin >> x >> y)
	{
		if (hmean(x, y, &z))
			std::cout << "Srednia harmoniczna liczba: " << x << " i " << y << " wynosi " << z << std::endl;
		else
			std::cout << "Suma liczb nie moze wynosic 0 - sprobuj jeszcze raz.\n";
		std::cout << "Podaj kolejna pare liczb <w, aby wyjsc>: ";
	}
	std::cout << "Koniec\n";
	system("pause");
	return 0;
}
bool hmean(double a, double b, double * ans)
{
	if (a == -b)
	{
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0*a*b / (a + b);
		return true;
	}
}