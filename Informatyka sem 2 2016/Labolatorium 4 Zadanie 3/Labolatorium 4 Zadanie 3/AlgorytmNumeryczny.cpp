#include "AlgorytmNumeryczny.h"
AlgorytmNumeryczny::AlgorytmNumeryczny(Funkcja * f, double e):funkcja(f),epsilon(e)
{

}
AlgorytmNumeryczny::~AlgorytmNumeryczny()
{

}
void AlgorytmNumeryczny::UstawEpsilon(double e)
{
	epsilon = e;
}