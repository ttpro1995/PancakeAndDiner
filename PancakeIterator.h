#pragma once
#include "Iterator.h"
#include <vector>
using namespace std;
#include "MenuItem.h"
class PancakeIterator :
	public Iterator
{
private:
	vector<MenuItem> menu;
	int cur;
public:
	PancakeIterator(vector<MenuItem> menupancake);
	~PancakeIterator();
	bool hasNext();
	MenuItem* next();
};

