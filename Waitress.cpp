//CS202 - Group 9 - APCS 13ctt Pancake and Diner a example of iterator
#include "Waitress.h"
#include <iostream>
using namespace std;

Waitress::Waitress(DinerMenu menu1, PancakeHouseMenu menu2)
{
	diner = menu1;
	pancake = menu2;
}


Waitress::~Waitress()
{
}


void ::Waitress::printMenu()
{
	Iterator* DinerIterator = diner.createIterator();
	Iterator* PancakeIterator = pancake.createIterator();
	cout << "Breakfast :\n";
	printMenu(PancakeIterator);
	cout << endl << endl;
	cout << "lunch : \n";
	printMenu(DinerIterator);
}

void ::Waitress::printMenu(Iterator* iterator)
{
	while (iterator->hasNext())
	{
		MenuItem*tmp = iterator->next();
		cout << tmp->getName() << " " << tmp->getPrice() << endl;
		cout << tmp->getDescription() << endl;
	}
}