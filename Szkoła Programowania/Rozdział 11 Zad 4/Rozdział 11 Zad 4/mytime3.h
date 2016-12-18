#ifndef MYTIME3_H_
#define MYTIME_H_
#include<iostream>
using namespace std;
class Time
{
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0, int m=0);
	friend Time operator+(const Time & y, const Time & t);
	friend Time operator-(const Time & y, const Time & t);
    Time operator*(double n) const;
    friend Time operator*(double m,const Time & t)
    {
        return t*m; //difinicja miejscowa inline
    }
    friend ostream & operator<<(ostream &os,const Time & t);
};
#endif // MYTIME3_H_
