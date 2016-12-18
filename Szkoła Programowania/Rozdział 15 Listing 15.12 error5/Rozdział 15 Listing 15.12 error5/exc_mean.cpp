#include<iostream>
class bad_hmean
{
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0) :v1(a), v2(b)
	{

	}
	void mesg();
};
inline void bad_hmean::mesg()
{
	std::cout << "hmean(" << v1 << ", " << v2 << "): " << "niepoprawne argumenty a = -b\n";
}

class bad_gmean
{
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0) :v1(a), v2(b)
	{

	}
	const char * mesg();
};
inline const char * bad_gmean::mesg()
{
	return "Argumenty funkcji gmean() powinny byc >= 0\n";
}