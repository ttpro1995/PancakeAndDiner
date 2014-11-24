#include "DinerMenu.h"
#include <string>
#include <iostream>
using namespace std;

DinerMenu::DinerMenu()
{

}


DinerMenu::~DinerMenu()
{
	delete[]menu;
}

void DinerMenu::addItem(string name, string description,
	bool vegetarian, double price)
{
	MenuItem Item(name, description, vegetarian, price);
	if (numberOfItems >= MAX_ITEMS) {
		cout<<"Sorry, menu is full!Can’t add item to menu \n";
	}
	else {
		menu[numberOfItems] = Item;
		numberOfItems = numberOfItems + 1;
	}
}

MenuItem* DinerMenu::getMenuItem()
{

	return menu;
}