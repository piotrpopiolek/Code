#pragma once
#include"Cd.h"
class Classic:public Cd
{
	char song[50];
public:
	Classic();
	Classic(char * s1, char * s2,char * s3, int n, double x);
	Classic(const Classic & d);
	Classic(char * s1, const Cd & d);
	~Classic();
	virtual void Report() const;
	Classic & operator=(const Classic & d);
};

