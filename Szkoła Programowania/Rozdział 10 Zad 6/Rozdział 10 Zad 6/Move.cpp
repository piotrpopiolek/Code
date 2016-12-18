#include "Move.h"
Move::Move(double a, double b)
{
	x = a;
	y = b;
}
void Move::showmove()const
{
	cout << "Wartosc x: " << x << endl;
	cout << "Wartosc y: " << y << endl;
	cout << endl;
}
Move & Move::add(const Move &m)
{
	x += m.x;
	y += m.y;
	return *this;
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}

