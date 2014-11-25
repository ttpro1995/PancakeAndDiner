#include "DinerMenuIterator.h"
#include <iostream>
#include "MenuItem.h"
DinerMenuIterator::DinerMenuIterator(MenuItem* menuItem,int maxitem)
{
	max = maxitem;
	Item = menuItem;

}


DinerMenuIterator::~DinerMenuIterator()
{
}

bool DinerMenuIterator::hasNext()
{
	if (Item!=NULL)
		if (cur < max)
		{
			return true;
		}
	return false;
}

MenuItem* DinerMenuIterator::next()
{
	cur++;
	return &Item[cur-1];
}

