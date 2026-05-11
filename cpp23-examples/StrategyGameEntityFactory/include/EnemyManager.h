#pragma once

#include <vector>
#include <memory>
#include "Enemy.h"
#include "EnemyType.h"

class EnemyManager {
private:
	std::vector<std::unique_ptr<IEnemy>> enemies_;

public:
	void spawn_enemy(EnemyType type);
	void update_enemies() const;
};