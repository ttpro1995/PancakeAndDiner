//CS202 - Group 9 - APCS 13ctt Pancake and Diner a example of iterator
#include "DinerMenu.h"
#include <string>
#include <iostream>
using namespace std;
#include "DinerMenuIterator.h"
DinerMenu::DinerMenu()
{
	menu = new MenuItem[MAX_ITEMS];
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

DinerMenu::DinerMenu(const DinerMenu& MM)
{
	MAX_ITEMS = MM.MAX_ITEMS;
	numberOfItems = MM.numberOfItems;
	menu = new MenuItem[MAX_ITEMS];
	for (int i = 0; i < numberOfItems; i++)
	{
		menu[i] = MM.menu[i];
	}
	
}

DinerMenu& DinerMenu::operator=(const DinerMenu& MM)
{
	if (this == &MM)
	{
		return *this;
	}
	MAX_ITEMS = MM.MAX_ITEMS;
	numberOfItems = MM.numberOfItems;
	menu = new MenuItem[MAX_ITEMS];
	for (int i = 0; i < numberOfItems; i++)
	{
		menu[i] = MM.menu[i];
	}
	return *this;
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

//
//MenuItem* DinerMenu::getMenuItem()
//{
//
//	return menu;
//}

Iterator* DinerMenu::createIterator()
{
	return new DinerMenuIterator(menu,numberOfItems);
}


