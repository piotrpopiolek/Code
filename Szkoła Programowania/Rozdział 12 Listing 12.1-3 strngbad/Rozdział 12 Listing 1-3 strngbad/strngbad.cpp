#include<cstring>
#include "strngbad.h"
using std::cout;
int StringBad::num_strings=0;
StringBad::StringBad(const char * s)
{
    len=std::strlen(s); //ustalenie rozmiaru
    str=new char[len+1]; // przydzial odpowiedniej ilosci pamieci
	int i = 0; 
	while (i <= len)
	{
		str[i] = s[i];
		i++;
	}//inicjalizacja wskaznika
    num_strings++; //uaktualnienie licznika obiektow
    cout<<num_strings<<": \""<<str<<"\" - obiekt domyslny utworzony. \n"; //komunikat diagnostyczny
}
StringBad::StringBad()
{
	char s[] = "C++";
    len=4;
    str=new char[4];
	int i = 0;
	while (i <= len)
	{
		str[i] = s[i];
		i++;
	}
    num_strings++;
    cout<<num_strings<<": \""<<str<<"\" - obiekt domyslny utworzony. \n"; //komunikat diagnostyczny
}
StringBad::~StringBad()
{
    cout<<"\""<<str<<"\" - obiekt usuniety,";
    --num_strings;
    cout<<"s¹ jeszcze "<<num_strings<<".\n";
    delete [] str;
}
std::ostream & operator<<(std::ostream &os, const StringBad &st)
{
    os<<st.str;
    return os;
}
