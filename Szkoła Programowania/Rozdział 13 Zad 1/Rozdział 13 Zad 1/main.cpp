#include<iostream>
#include"Classic.h" //ktory zawiera cd.h
void Bravo(const Cd & disk);
int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.6);
	Classic c2 = Classic("Sonata fortepianowa B-dur, Fantazja C-moll", "Alfred Brendel", "Philips", 2, 57.17);
	Cd * pcd = &c1;
	std::cout << "Bezposrednie uzycie obiektu:\n";
	c1.Report();//uzywa metody klasy Cd
	c2.Report();//uzywa metody klasy Classic
	std::cout << "Uzycie wskaznikana typ Cd:\n";
	pcd->Report();//uzywa metody klasy Cd dla obiektu tej klasy
	pcd = &c2;
	pcd->Report();//uzywa metody klasy Classic dla obiektu tej klasy
	std::cout << "Wywolanie funkcji z argumentem w postaci referencji do typu Cd:\n";
	Bravo(c1);
	Bravo(c2);
	std::cout << "Test przypisania: ";
	Classic copy;
	copy = c2;
	copy.Report();
	system("pause");
	return 0;
}
void Bravo(const Cd & disk)
{
	disk.Report();
}