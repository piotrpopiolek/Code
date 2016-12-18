#include<iostream>
#ifndef STRNBAD_H_
#define STRNGBAD_H_
class StringBad
{
    char* str; //wskaznik ciagu
    int len; //dlugosc ciagu
    static int num_strings; //liczba obiektow
public:
    StringBad(const char*s);
    StringBad();
    ~StringBad();
    friend std::ostream & operator<<(std::ostream & os, const StringBad &st);
};
#endif // STRNBAD_H
