#pragma once

#include <print>
#include <string>

struct Item {
	std::string name;
	int quantity{ 1 };

	void print() const {
		std::println("- {} (x{})", name, quantity);
	}
};