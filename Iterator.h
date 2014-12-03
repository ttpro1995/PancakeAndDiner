//CS202 - Group 9 - APCS 13ctt Pancake and Diner a example of iterator
#pragma once

class MenuItem;//prototype

class Iterator
{
private:

public:
	Iterator();
	~Iterator();
	 virtual bool  hasNext()=0;
 virtual MenuItem* next()=0;

};

