#include "EnemyManager.h"
#include "EnemyFactory.h"
#include <memory>
#include <print>

void EnemyManager::spawn_enemy(EnemyType type) {
	if (auto new_enemy = EnemyFactory::create_enemy(type)) {
		enemies_.push_back(std::move(new_enemy));
		std::println("Manager: New {} spawned.", enemies_.back()->get_type());
	}
}

void EnemyManager::update_enemies() const {
	std::println("--- Game Loop: Enemies Updating ---");
	for (const auto& enemy : enemies_) {
		enemy->attack();
	}
}