#pragma once
#include<iostream>
#include<cstring>
using std::cout;
using std::endl;
class base
{
	char * label;
	int rating;
protected:
	const char * getLabel() const;
	const int getRating() const;
public:
	base(const char * s1="<tytul>",int r=0);
	base(const base & rs);
	base & base::operator=(const base & ob);
	virtual void View() = 0;
	virtual ~base();
};