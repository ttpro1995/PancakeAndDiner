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