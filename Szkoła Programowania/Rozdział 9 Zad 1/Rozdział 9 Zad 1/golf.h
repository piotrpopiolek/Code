#pragma once
#include<iostream>
using namespace std;
const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
};
void setgolf(golf & g,char *name, int hc);
void setgolf(golf &g);
void handicap(golf &g, int hc);
void showgolf(const golf & g);