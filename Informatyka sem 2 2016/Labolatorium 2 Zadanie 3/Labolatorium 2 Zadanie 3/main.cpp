#include<iostream>
#include"BSTree.h"
using namespace std;
int main()
{
	BSTree bst;
	cout << (bst.isEmpty() ? "Drzewo jest puste" : "Drzewo nie jest puste") << endl;
	bst.insert(5);
	bst.insert(3);
	bst.insert(7);
	bst.insert(4);
	bst.insert(2);
	cout << (bst.isEmpty() ? "Drzewo jest puste" : "Drzewo nie jest puste") << endl;
	cout << "Drzewo zawiera element o wartosc 3: " << bst.contains(3) << endl;
	cout << "Drzewo zawiera element o wartosc 9: " << bst.contains(9) << endl;
	bst.printInOrder();
	cout << endl;
	bst.clear();
	cout << (bst.isEmpty() ? "Drzewo jest puste" : "Drzewo nie jest puste") << endl;
	system("pause");
	return 0;
}