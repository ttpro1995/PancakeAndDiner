//CS202 - Group 9 - APCS 13ctt Pancake and Diner a example of iterator
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

