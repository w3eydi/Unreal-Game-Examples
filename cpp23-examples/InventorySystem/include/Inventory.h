#pragma once

#include <string>
#include <string_view>
#include <vector>

#include "Item.h"

class Inventory {
private:
	std::vector<Item> items;

public:
	void addItem(std::string item_name, int amount = 1);
	bool useItem(std::string_view item_name);
	void printItems() const;
};
