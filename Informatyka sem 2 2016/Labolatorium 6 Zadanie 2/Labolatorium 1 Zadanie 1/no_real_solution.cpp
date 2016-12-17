#include "no_real_solution.h"
no_real_solution::no_real_solution(const std::string & what_arg):std::runtime_error(what_arg)
{

}
no_real_solution::no_real_solution(const char* what_arg) : std::runtime_error(what_arg)
{

}
