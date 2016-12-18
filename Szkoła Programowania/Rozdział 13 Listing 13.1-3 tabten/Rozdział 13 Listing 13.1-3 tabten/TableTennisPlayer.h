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

