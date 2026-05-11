#include "Archer.h"
#include <print>

void Archer::attack() const {
	std::println("Archer: Arrow fired!");
}

std::string_view Archer::get_type() const noexcept {
	return "Archer";
}