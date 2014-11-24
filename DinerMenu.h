#pragma once
#include "MenuItem.h"
#include <string>
using namespace std;
class DinerMenu
{
private:
	int MAX_ITEMS=6;
	int  numberOfItems = 0;
	MenuItem* menu;
public:
	DinerMenu();
	~DinerMenu();
	void addItem(string name, string description, bool vegetarian, double price);
	MenuItem* getMenuItem();
};

