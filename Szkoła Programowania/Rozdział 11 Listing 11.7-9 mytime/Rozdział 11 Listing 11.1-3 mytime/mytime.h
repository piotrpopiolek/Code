#pragma once
#ifndef MYTIME0_H_
#define MYTIME0_H_
class Time
{
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(double n) const;
	void Show() const;
	~Time();
};
#endif // !MYTIME0_H_

