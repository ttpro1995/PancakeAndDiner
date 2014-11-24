#include "PancakeHouseMenu.h"
#include <string>
using namespace std;

PancakeHouseMenu::PancakeHouseMenu()
{

	
	addItem("K&B’s Pancake Breakfast",
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