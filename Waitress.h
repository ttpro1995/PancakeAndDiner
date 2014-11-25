#pragma once
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
class Waitress
{
private:
	DinerMenu diner;
	PancakeHouseMenu pancake;
public:
	Waitress(DinerMenu menu1,PancakeHouseMenu menu2);
	~Waitress();
	void printMenu();
	void printMenu(Iterator*);
};

