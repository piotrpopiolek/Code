#include<iostream>
#ifndef STRNBAD_H_
#define STRNGBAD_H_
class StringBad
{
    char* str; //wskaznik ciagu
    int len; //dlugosc ciagu
    static int num_strings; //liczba obiektow
	static const int CINLIM = 80; //limit dlugosci ciagu na wejsciu
public:
    StringBad(const char*s);
    StringBad();
	StringBad(const StringBad &);
    ~StringBad();
	int length() const
	{
		return len;
	}
	StringBad & operator=(const StringBad &);
	StringBad & operator=(const char *);
	char & operator[](int i);
	const char & operator[](int i)const;
	friend bool operator<(const StringBad & st, const StringBad & st2);
	friend bool operator>(const StringBad & st, const StringBad & st2);
	friend bool operator==(const StringBad & st, const StringBad & st2);
    friend std::ostream & operator<<(std::ostream & os, const StringBad &st);
	friend std::istream & operator>>(std::istream & is, StringBad &st);
	static int HowMany();
};
#endif // STRNBAD_H
