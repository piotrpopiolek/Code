#include<iostream>
#include<string>
#include<cctype>
#include"stacktp.h"
#include"WorkerMi.h"
using std::cin;
using std::cout;
using std::string;
int main()
{
	Stack<Worker *> st;
	char ch;
	Worker * po;
	cout << "Wpisz D, aby dodac pracownika,\nP, aby usunac pracownika, i Z, aby zakonczyc.\n";
	while (cin >> ch && std::toupper(ch) != 'Z')
	{
		while (cin.get() != '\n')
			continue;
		if (!std::isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'D':
		case 'd':
		{
			cout << "Dodaj pracownika: \n";
			cout << "Kogo chcesz dodac?\n";
			cout << "k) kelner\tp) piosenkarz\ts) spiewajacy kelner\n";
				char a; cin >> a;
				cin.get();
				if (a == 'k')
					po = new Waiter;
				else if (a == 'p')
					po = new Singer;
				else
					po = new SingingWaiter;
				//kompilator zglaszal blad gdy mozliwe bylo ze zaden z warunkow wybrania nowego pracownika nie zostanie spelniony
			po->Set();
		}
			if (st.isfull())
				cout << "Stos pelny\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isempty())
				cout << "Stos pusty\n";
			else
			{
				st.pop(po);
				cout << "Sciagam ze stosu: " << std::endl;
				po->Show();
				break;
			}
		}
		cout << "Wpisz D, aby dodac pracownika,\nP, aby usunac pracownika, i Z, aby zakonczyc.\n";
	}
	system("pasue");
	return 0;
}