#include<algorithm>
#include<set>
#include<map>
#include<iostream>
#include<string>
#include<iterator>
#include<cctype>
using namespace std;
enum class TypRosliny { Owoc, Warzywo };
struct Roslina
{
	TypRosliny typ;
	string nazwa;
};
using Koszyk = set<Roslina>;
ostream & operator<<(ostream & os,const Roslina & ob)
{
	os << ob.nazwa << endl;
	return os;
}
bool operator<(const Roslina& r1, const Roslina& r2)
{
	return (r1.nazwa < r2.nazwa);
}
ostream & operator<<(ostream & os, const Koszyk & koszyk)
{
	for (Roslina i : koszyk)
	{
		os << i.nazwa << " ";
	}
	return os;
}
bool czy_jest_gruszka(const Koszyk &koszyk)
{
	auto i = koszyk.find(Roslina{ TypRosliny::Owoc, "Gruszka" });
	return (i != koszyk.end());
}
bool czy_same_owoce(const Koszyk & koszyk)
{
	return all_of(koszyk.begin(), koszyk.end(),[](const Roslina & temp)
	{
		return temp.typ == TypRosliny::Owoc;
	});
}
bool czy_same_warzywa(const Koszyk &koszyk)
{
	return all_of(koszyk.begin(), koszyk.end(), [](const Roslina & temp)
	{
		return temp.typ == TypRosliny::Warzywo;
	});
}

bool co_najmniej_jeden_owoc(const Koszyk &koszyk)
{
	return any_of(koszyk.begin(), koszyk.end(), [](const Roslina & temp)
	{
		return temp.typ == TypRosliny::Owoc;
	});
}

bool co_najmniej_jedno_warzywo(const Koszyk &koszyk)
{
	return any_of(koszyk.begin(), koszyk.end(), [](const Roslina & temp)
	{
		return temp.typ == TypRosliny::Warzywo;
	});
}


bool czy_zadnego_warzywa(const Koszyk &koszyk)
{
	return none_of(koszyk.begin(), koszyk.end(), [](const Roslina & temp)
	{
		return temp.typ == TypRosliny::Warzywo;
	});
}

bool czy_zadnego_owocu(const Koszyk &koszyk)
{
	return none_of(koszyk.begin(), koszyk.end(), [](const Roslina & temp)
	{
		return temp.typ == TypRosliny::Owoc;
	});
}

int zlicz_owoce(const Koszyk & koszyk)
{
	return count_if(koszyk.begin(), koszyk.end(), [](const Roslina& temp)
	{
		return temp.typ == TypRosliny::Owoc;
	});
}

int zlicz_warzywa(const Koszyk & koszyk)
{
	return count_if(koszyk.begin(), koszyk.end(), [](const Roslina& temp) 
	{
		return temp.typ == TypRosliny::Warzywo;
	});
}
int zlicz_warzywa_na_litere_p(const Koszyk & koszyk)
{
	return count_if(koszyk.begin(), koszyk.end(), [](const Roslina & temp)
	{
		return toupper(temp.nazwa[0]) == 'P';
	});
}
void usun_jezeli(Koszyk & koszyk, char litera)
{
	for (auto & i = koszyk.begin(); i != koszyk.end(); i++)
	{
		if (i->nazwa[0] == litera && i->typ==TypRosliny::Warzywo)
		{
			i=koszyk.erase(i);
			i--;
		}
	}
}
Koszyk koszyk_wspolne(const Koszyk& k1, const Koszyk& k2)
{
	Koszyk koszyk_wspolne;
	set_intersection(
		k1.begin(), k1.end(),
		k2.begin(), k2.end(),
		inserter(koszyk_wspolne, koszyk_wspolne.begin())
	);
	cout << koszyk_wspolne << endl;
	return koszyk_wspolne;
}

Koszyk koszyk_roznice(const Koszyk& k1, const Koszyk& k2)
{
	Koszyk koszyk_roznice;

	set_difference(
		k1.begin(), k1.end(),
		k2.begin(), k2.end(),
		inserter(koszyk_roznice, koszyk_roznice.begin())
	);
	return koszyk_roznice;
}
Koszyk koszyk_razem(const Koszyk& k1, const Koszyk& k2)
{
	Koszyk koszyk_razem;

	std::set_union(
		k1.begin(), k1.end(),
		k2.begin(), k2.end(),
		inserter(koszyk_razem, koszyk_razem.begin())
	);
	return koszyk_razem;
}

int main()
{
	Koszyk koszyk;
	koszyk.insert({ TypRosliny::Warzywo, "Pomidor" });
	koszyk.insert({ TypRosliny::Owoc,"Gruszka" });
	koszyk.insert({ TypRosliny::Warzywo, "Marchewka" });
	koszyk.insert({ TypRosliny::Warzywo, "Pietruszka" });
	Koszyk koszykMarty;
	koszykMarty.insert({ TypRosliny::Warzywo, "Ziemniaki" });
	koszykMarty.insert({ TypRosliny::Owoc,"Czeresnie" });
	koszykMarty.insert({ TypRosliny::Warzywo, "Marchewka" });
	koszykMarty.insert({ TypRosliny::Warzywo, "Pietruszka" });
	cout << koszyk << endl;
	cout << (czy_jest_gruszka(koszyk) ? "Jest gruszka" : "Nie ma gruszki") << endl;
	cout << (czy_same_owoce(koszyk) ? "Tylko owoce" : "Nie tylko owoce") << endl;
	cout << (czy_same_warzywa(koszyk) ? "Tylko warzywa" : "Nie tylko warzywa") << endl;
	cout << (co_najmniej_jeden_owoc(koszyk) ? "Co najmniej jeden owoc" : "Brak owocow") << endl;
	cout << (co_najmniej_jedno_warzywo(koszyk) ? "Co najmniej jedno warzywo" : "Brak warzyw") << endl;
	cout << "Ile jest owocow? " << (zlicz_owoce(koszyk)) << endl;
	cout << "Ile jest warzyw? " << (zlicz_warzywa(koszyk)) << endl;
	cout << "Ile warzyw na litere p : "<< zlicz_warzywa_na_litere_p(koszyk) << endl;
	cout << "Koszyk Marty " << koszykMarty << endl;
	cout << "Koszyk Malgosi " << koszyk << endl;
	cout << "Pokaz roznice: " << koszyk_roznice(koszyk,koszykMarty) << endl;
	cout << "Pokaz wspolne: " << koszyk_wspolne(koszyk,koszykMarty) << endl;
	cout << "Pokaz razem: " << koszyk_razem(koszyk,koszykMarty) << endl;
	usun_jezeli(koszyk, 'P');
	cout << koszyk << endl;
	system("pause");
	return 0;
}