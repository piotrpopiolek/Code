#pragma once
#include<string>
#include<iostream>
class Test
{
	std::string name;
	int value;
public:
	Test();
	Test(std::string n=" ",int v=0);
	~Test();
};

