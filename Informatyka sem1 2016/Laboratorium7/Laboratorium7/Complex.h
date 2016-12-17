#include<iostream>
struct Complex
{
	double re;
	double lm;
};
Complex Create(double r, double l);
Complex Add(Complex& A, Complex& B);
Complex Substract(Complex& A, Complex& B);
Complex Multiply(Complex& A, Complex& B);
bool equals(Complex&A, Complex& B);
void Show(const Complex & A);