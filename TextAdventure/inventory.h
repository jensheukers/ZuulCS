#pragma once
#include <iostream>
#include <vector>
#include "items.h"
class Inventory {
private:
	int maxWeight = 100000; //Default at 100k kg Max
	int weight = 0;
	std::vector<Item*>contents;
public:
	std::vector<Item*> getContents();
	Item* getItem(int index);
	void removeItem(int index);
	bool addItem(Item* item);
	int getWeight();
	int getSize();
	int getMaxWeight();
	int setMaxWeight(int max);
};