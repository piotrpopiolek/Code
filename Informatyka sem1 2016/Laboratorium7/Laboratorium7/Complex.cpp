#include"Complex.h"
Complex Create(double r, double l) 
{
	Complex temp;
	temp.re = r;
	temp.lm = l;
	return temp;
}
Complex Add(Complex& A, Complex& B)
{
	Complex sum;
	sum.re = A.re + B.re;
	sum.lm = A.lm + B.lm;
	return sum;
}
Complex Substract(Complex& A, Complex& B)
{
	Complex sum;
	sum.re = A.re - B.re;
	sum.lm = A.lm - B.lm;
	return sum;
}
Complex Multiply(Complex& A, Complex& B)
{
	Complex sum;
	sum.re = A.re*B.re - A.lm*B.lm;
	sum.lm = A.re*B.lm + A.lm*B.re;
	return sum;
}
bool equals(Complex&A, Complex& B)
{
	if (A.re == B.re)
	{
		if (A.lm == B.lm)
			return true;
	}
	else
		return false;
}
void Show(const Complex & A)
{
	std::cout<<A.re << " " << A.lm << 'i' << std::endl;
}