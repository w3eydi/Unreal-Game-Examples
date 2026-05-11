#pragma once

#include "EnemyType.h"

#include <memory>

class IEnemy;

class EnemyFactory {
public:
	[[nodiscard]] static std::unique_ptr<IEnemy> create_enemy(EnemyType type);
};
