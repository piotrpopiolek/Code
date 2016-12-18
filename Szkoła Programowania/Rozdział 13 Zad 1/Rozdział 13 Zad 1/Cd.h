#pragma once
class Cd
{
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd();
	Cd(char * s1,char * s2,int n, double x);
	Cd(const Cd & d);
	~Cd();
	virtual void Report() const;
	Cd & operator=(const Cd & d);
};

