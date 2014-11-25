#include "MenuItem.h"



MenuItem::MenuItem(string name,
	string description,
	bool vegetarian,
	double price)
{
	this->name = name;
	this->description = description;
	this->vegetarian = vegetarian;
	this->price = price;
}
MenuItem::MenuItem()
{

}

string MenuItem::getName() {
	return name;
}
string MenuItem::getDescription() {
	return description;
}
double MenuItem::getPrice() {
	return price;
}
bool MenuItem::isVegetarian() {
	return vegetarian;
}

MenuItem::~MenuItem()
{
}

