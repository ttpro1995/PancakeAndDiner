//CS202 - Group 9 - APCS 13ctt Pancake and Diner a example of iterator
#include "PancakeHouseMenu.h"
#include <string>
using namespace std;
#include "PancakeIterator.h"
PancakeHouseMenu::PancakeHouseMenu()
{

	
	addItem("K and B 's Pancake Breakfast",
		"Pancakes with scrambled eggs, and toast",
		true,
		2.99);
	addItem("Regular Pancake Breakfast",
		"Pancakes with fried eggs, sausage",
		false,
		2.99);
	addItem("Blueberry Pancakes",
		"Pancakes made with fresh blueberries",
		true,
		3.49);
	addItem("Waffles",
		"Waffles, with your choice of blueberries or strawberries",
		true,
		3.59);


}


PancakeHouseMenu::~PancakeHouseMenu()
{
}

void PancakeHouseMenu::addItem(string name, string description,
	bool vegetarian, double price)
{
	MenuItem Item (name, description, vegetarian, price);
	menu.push_back(Item);
}

vector<MenuItem> PancakeHouseMenu::getMenuItems()
{
	return menu;
}

Iterator* PancakeHouseMenu::createIterator(){
	return new PancakeIterator(menu);
};
