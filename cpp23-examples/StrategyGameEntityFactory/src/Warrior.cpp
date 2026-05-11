#include "Warrior.h"
#include <print>

void Warrior::attack() const {
    std::println("Warrior: Attacked by sword.");
}

std::string_view Warrior::get_type() const noexcept {
    return "Warrior";
}