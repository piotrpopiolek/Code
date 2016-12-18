#include<cstring>
#include "strngbad.h"
using std::cout;
int StringBad::num_strings=0;
int StringBad::HowMany()
{
	return num_strings;
}
StringBad::StringBad(const char * s)
{
	len = std::strlen(s); //ustalenie rozmiaru
	str = new char[len + 1]; // przydzial odpowiedniej ilosci pamieci
	int i = 0;
	while (i <= len)
	{
		str[i] = s[i];
		i++;
	}//inicjalizacja wskaznika
	num_strings++; //uaktualnienie licznika obiektow
}
StringBad::StringBad()
{
    len=4;
    str=new char[1];
	str[0] = '\0';
    num_strings++;
}
StringBad::StringBad(const StringBad & st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	int i = 0;
	while (i <= len)
	{
		str[i] = st[i];
		i++;
	}
}
StringBad::~StringBad()
{
    cout<<"\""<<str<<"\" - obiekt usuniety,";
    --num_strings;
    cout<<"s¹ jeszcze "<<num_strings<<".\n";
    delete [] str;
}
//przypisywanie obiektu klasy StringBad do innego obiektu tej klasy
StringBad & StringBad::operator=(const StringBad & st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	int i = 0;
	while (i <= len)
	{
		str[i] = st[i];
		i++;
	}
	return *this;
}
//przypisywanie ciagu C do obiektu klasy String
StringBad & StringBad::operator=(const char * s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	int i = 0;
	while (i <= len)
	{
		str[i] = s[i];
		i++;
	}
	return *this;
}
//pelny dostep do znakow ciagu (dla obiektow zwyklych)
char & StringBad::operator[](int i)
{
	return str[i];
}
//dostep do odczytu do znakow ciagu dla obiektow const
const char & StringBad::operator[](int i) const
{
	return str[i];
}
bool operator<(const StringBad & st1, const StringBad & st2)
{
	return(std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const StringBad & st1, const StringBad & st2)
{
	return st2 < st1;
}
bool operator==(const StringBad & st1, const StringBad & st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}
std::ostream & operator<<(std::ostream & os, const StringBad &st)
{
	os << st.str;
	return os;
}
std::istream & operator>>(std::istream & is, StringBad &st)
{
	char temp[StringBad::CINLIM];
	is.get(temp, StringBad::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}