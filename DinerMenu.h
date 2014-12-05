#pragma once
//CS202 - Group 9 - APCS 13ctt Pancake and Diner a example of iterator
#include "MenuItem.h"
#include "DinerMenuIterator.h"
#include <string>
using namespace std;
class DinerMenu
{
private:
	int MAX_ITEMS=6;//c++11
	int  numberOfItems = 0;//c++11
	MenuItem* menu;
public:
	DinerMenu();
	DinerMenu(const DinerMenu&);
	DinerMenu& operator=(const DinerMenu&);
	~DinerMenu();
	void addItem(string name, string description, bool vegetarian, double price);
	//MenuItem* getMenuItem();  not need this because we use Iterator
	Iterator* createIterator();
};

