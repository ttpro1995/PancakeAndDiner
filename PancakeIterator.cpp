//CS202 - Group 9 - APCS 13ctt Pancake and Diner a example of iterator
#include "PancakeIterator.h"


PancakeIterator::PancakeIterator(vector<MenuItem> menupancake)
{
	menu = menupancake;
	cur = 0;
}


PancakeIterator::~PancakeIterator()
{
}

bool ::PancakeIterator::hasNext()
{
	if (cur < menu.size())
		return true;
	return false;
}

MenuItem* PancakeIterator::next()
{
	
	cur++;
	return &menu[cur-1];
}