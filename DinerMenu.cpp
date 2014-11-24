#include "DinerMenu.h"
#include <string>
#include <iostream>
using namespace std;

DinerMenu::DinerMenu()
{
	addItem("Vegetarian BLT",
		"(Fakin’) Bacon with lettuce & tomato on whole wheat", true, 2.99);
	addItem("BLT",
		"Bacon with lettuce & tomato on whole wheat", false, 2.99);
	addItem("Soup of the day",
		"Soup of the day, with a side of potato salad", false, 3.29);
	addItem("Hotdog",
		"A hot dog, with saurkraut, relish, onions, topped with cheese",
		false, 3.05);
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