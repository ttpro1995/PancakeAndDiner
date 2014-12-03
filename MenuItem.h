//CS202 - Group 9 - APCS 13ctt Pancake and Diner a example of iterator
#pragma once
#include <string>
using namespace std;
class MenuItem
{
private:
	string name;
		string description;
		bool vegetarian;
		double price;
public:
	MenuItem(string name,
		string description,
		bool vegetarian,
		double price);
	MenuItem();
	~MenuItem();
	string getName();
	string getDescription();
	double getPrice();
	bool isVegetarian();

};

