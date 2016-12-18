#pragma once
#include"Cd.h"
class Classic:public Cd
{
	char * song;
public:
	Classic(char * s1 = "<wykonawca>", char * s2 = "<tytul>",char * s3="<numer_jeden>", int n = 0, double x = 0.0);
	Classic(const Classic & d);
	Classic(char * s1, const Cd & d);
	~Classic();
	virtual void Report() const;
	Classic & operator=(const Classic & d);
};

