#ifndef MATH_HPP
#define MATH_HPP
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
void Show(const Complex& A);

Complex operator+(const Complex& A, const Complex& B);
Complex operator-(const Complex& A, const Complex& B);
Complex operator*(const Complex& A, const Complex& B);
bool operator==(const Complex&A, const Complex& B);
std::ostream& operator<<(std::ostream& stream,const Complex & A);
std::istream& operator >> (std::istream &enter, Complex& A);
#endif