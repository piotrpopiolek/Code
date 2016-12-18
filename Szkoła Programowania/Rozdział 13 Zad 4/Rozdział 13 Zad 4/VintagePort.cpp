#include "VintagePort.h"
VintagePort::VintagePort()
{

}
VintagePort::VintagePort(char * br,char * st, int b, char * nm, int y):Port(br,st,b)
{
	int i = 0;
	nickname = new char[strlen(nm) + 1];
	while (i <= strlen(nm))
	{
		nickname[i] = nm[i];
		i++;
	}
	year = y;
}
VintagePort::VintagePort(const VintagePort & vp)
{
	int i = 0;
	nickname = new char[strlen(vp.nickname) + 1];
	while (i <= strlen(vp.nickname))
	{
		nickname[i] = vp.nickname[i];
		i++;
	}
	year = vp.year;
	Port::operator=(vp);
}
VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	int i = 0;
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	while (i <= strlen(vp.nickname))
	{
		nickname[i] = vp.nickname[i];
		i++;
	}
	year = vp.year;
	return *this;
}
void VintagePort::Show() const
{
	Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}
ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << vp.nickname << " " << vp.year;
	return os;
}
