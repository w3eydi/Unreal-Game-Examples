#include <print>

#include "Inventory.h"

int main() {
	Inventory inventory;
	
	inventory.addItem("Potion", 3);
	inventory.addItem("Arrow", 10);
	inventory.addItem("Potion", 2);

	inventory.printItems();

	std::println("Using Potion..");
	inventory.useItem("Potion");

	inventory.printItems();

	return 0;
}