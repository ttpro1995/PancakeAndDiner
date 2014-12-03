//CS202 - Group 9 - APCS 13ctt Pancake and Diner a example of iterator
#include <iostream>
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include "Waitress.h"
using namespace std;

int main()
{
	DinerMenu diner;
	PancakeHouseMenu pancake;
	Waitress Alice(diner,pancake);
	Alice.printMenu();
	
}