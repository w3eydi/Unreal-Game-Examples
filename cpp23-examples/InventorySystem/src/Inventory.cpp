#include "Inventory.h"

void Inventory::addItem(std::string item_name, int amount) {
	if (amount <= 0) return;

	for (auto& item : items) {
		if (item.name == item_name) {
			item.quantity += amount;
			return;
		}
	}

	items.push_back(Item{ std::move(item_name), amount });
}

bool Inventory::useItem(std::string_view item_name) {
	for (auto it = items.begin(); it != items.end(); ++it) {
		if (it->name == item_name) {
			--it->quantity;

			if (it->quantity <= 0) {
				items.erase(it);
			}

			return true;
		}
	}

	return false;
}

void Inventory::printItems() const {
	if (items.empty()) {
		std::println("Inventory is empty.");
		return;
	}

	std::println("Inventory:");
	for (const auto& item : items) {
		item.print();
	}
}