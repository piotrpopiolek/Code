#pragma once
class Cd
{
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(char * s1="<wykonawca>",char * s2="<tytul>",int n=0, double x=0.0);
	Cd(const Cd & d);
	virtual ~Cd();
	virtual void Report() const;
	Cd & operator=(const Cd & d);
};

