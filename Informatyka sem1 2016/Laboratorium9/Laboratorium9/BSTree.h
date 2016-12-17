#pragma once
#include"ElementDrzewa.h"
#include<iostream>
using namespace std;
class BSTree
{
	std::unique_ptr<ElementDrzewa> korzen;
	void inorder(std::unique_ptr<ElementDrzewa> pom) const;
	void deleteAll(std::unique_ptr<ElementDrzewa> pom);
public:
	BSTree();
	~BSTree();
	bool isEmpty();
	void insert(int liczba);
	void printInOrder(); 
	bool contains(int szukana) const;
	void clear();
};
