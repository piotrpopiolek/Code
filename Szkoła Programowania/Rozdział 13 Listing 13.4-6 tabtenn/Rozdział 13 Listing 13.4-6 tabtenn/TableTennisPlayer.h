#pragma once
#include <string>
using namespace std;
class TableTennisPlayer
{
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string & fn = "brak", const string & ln = "brak", bool ht = false);
	void Name() const;
	bool HasTable() const
	{
		return hasTable;
	};
	void ResetTable(bool v)
	{
		hasTable = v;
	};
};
class RatedPlayer :public TableTennisPlayer
{
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string & fn = "brak", const string & ln = "brak", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
	unsigned int Rating() const
	{
		return rating;
	}
	void ResetRating(unsigned int r)
	{
		rating = r;
	};
};
