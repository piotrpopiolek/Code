#include "Test.h"
Test::Test()
{
	std::cout << "Konstruktor bez argumentowy!\n";
	std::cout << name << "\t" << value << std::endl;
}
Test::Test(std::string n, int v) :name(n), value(v)
{
	std::cout << "Konstruktor argumentowy!\n";
	std::cout << name << "\t" << value << std::endl;
}
Test::~Test()
{

}
