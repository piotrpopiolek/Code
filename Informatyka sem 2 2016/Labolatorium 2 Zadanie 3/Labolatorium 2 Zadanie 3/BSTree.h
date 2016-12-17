#pragma once
#include"ElementDrzewa.h"
#include<iostream>
using namespace std;
class BSTree
{
	ElementDrzewa* korzen;
	void inorder(ElementDrzewa* pom) const;
	void deleteAll(ElementDrzewa* pom);
public:
	BSTree();
	~BSTree();
	bool isEmpty();
	void insert(int liczba);
	void printInOrder(); 
	bool contains(int szukana) const;
	void clear();
};
