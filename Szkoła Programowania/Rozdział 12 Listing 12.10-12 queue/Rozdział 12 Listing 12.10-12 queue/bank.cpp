#include<iostream>
#include<cstdlib>
#include<ctime>
#include<ctime>
#include"queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));
	cout << "Studium przypadku: bankomat Banku Kas\n";
	cout << "Podaj maksymalna dlugosc kolejki: ";
	int qs;
	cin >> qs;
	Queue line(qs); // w kolejce moze stanac qs klientow
	cout << "Podaj symulowany czas (w godzinach):\n";
	int hours;
	cin >> hours;
	//symulacja z jednominutowa rozdzielczoscia
	long cyclelimit = MIN_PER_HR * hours;
	cout << "Podaj srednia liczbe klientow na godzine: ";
	double perhour; cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;
	Item temp; //dane nowego klienta
	long turnaways = 0; //liczba klientow odeslanych z kolejki
	long customers = 0; //liczba klientow przyjetych do kolejki
	long served = 0; //liczba klientow obsluzonych w symulacji
	long sum_line = 0; //laczna liczba oczekujacych
	int wait_time = 0; //czas do zwolnienia bankomatu
	long line_wait = 0; //laczny czas oczekiwania
	//rozpoczecie symulacji
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust)) //mamy nowego chetnego
		{
			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle); // czas przybycia = nr cyklu
				line.enqueue(temp); //dolaczenie klienta do kolejki
			}
		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp); //nastepny do obsluzenia 
			wait_time = temp.ptime(); //czas obslugi = wait_time 
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.queuecount();
	}
	//zestawienie wynikow
	if (customers > 0)
	{
		cout << "Liczba klientow przyjetych: " << customers << endl;
		cout << "Liczba klientow obsluzonych: " << served << endl;
		cout << "Liczba klientow odeslanych: " << turnaways << endl;
		cout << "Srednia dlugosc kolejki: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "Sredni czas oczekiwania: " << (double)line_wait / served << " minut\n";
	}
	else
		cout << "Brak klientow!\n";
	system("pause");
	return 0;
}
bool newcustomer(double x)
{
	return (std::rand()*x / RAND_MAX < 1);
}