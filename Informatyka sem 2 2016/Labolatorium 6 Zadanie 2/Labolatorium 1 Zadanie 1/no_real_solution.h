#pragma once
#include<exception>
#include<stdexcept>
#include<string>
class no_real_solution:public std::runtime_error
{
public:
	explicit no_real_solution(const std::string & what_arg);
	explicit no_real_solution(const char* what_arg);
};

