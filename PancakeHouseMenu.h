//CS202 - Group 9 - APCS 13ctt Pancake and Diner a example of iterator
#pragma once
#include <vector>
#include "MenuItem.h"
#include "Iterator.h"
using namespace std;
class PancakeHouseMenu
{
private:
	vector <MenuItem> menu;

public:
	PancakeHouseMenu();
	~PancakeHouseMenu();
	void addItem(string name, string description,bool vegetarian, double price);
	vector<MenuItem> getMenuItems();
	Iterator* createIterator();
};

