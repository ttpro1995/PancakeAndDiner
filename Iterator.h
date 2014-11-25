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

