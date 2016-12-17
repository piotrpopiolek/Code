#pragma once
class Biggest
{
public:
	int value;
	Biggest();
	~Biggest();
	void operator()(int x);
};

