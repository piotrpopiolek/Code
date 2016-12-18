#include<vector>
#include<list>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	srand(time(NULL));
	int size = 10000000;
	vector<int> vi0(size);
	list<int> li;
	cout << "vi0" << endl;
	for (vector<int>::iterator i = vi0.begin(); i != vi0.end(); i++)
	{
		*i = rand();
		//cout << *i << " ";
		li.push_back(*i);
	}
	cout << endl;
	vector<int> vi(vi0);
	clock_t start1 = clock();
	sort(vi.begin(), vi.end());
	clock_t end1 = clock();
	cout << (double)(end1 - start1) / CLOCKS_PER_SEC << endl;
	vector<int> temp;
	clock_t start2 = clock();
	for (list<int>::iterator i = li.begin(); i != li.end(); i++)
	{
		temp.push_back(*i);
	}
	sort(temp.begin(), temp.end());
	li.clear();
	for (vector<int>::iterator i = temp.begin(); i != temp.end(); i++)
	{
		li.push_back(*i);
	}

	clock_t end2 = clock();
	cout << (double)(end2 - start2) / CLOCKS_PER_SEC << endl;
	cout << "vi" << endl;
	/*for (vector<int>::iterator i = vi.begin(); i != vi.end(); i++)
	{
		cout << *i << " ";
	}*/
	cout << endl;
	cout << "li" << endl;
	/*for (list<int>::iterator i = li.begin(); i != li.end(); i++)
	{
		cout << *i << " ";
	}*/
	cout << endl;
	system("pause");
	return 0;
}