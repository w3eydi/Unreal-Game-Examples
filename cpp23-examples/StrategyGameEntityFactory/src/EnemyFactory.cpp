#include "EnemyFactory.h"
#include "Archer.h"
#include "Warrior.h"

std::unique_ptr<IEnemy> EnemyFactory::create_enemy(EnemyType type) {
	switch (type)
	{
	case EnemyType::Archer:
		return std::make_unique<Archer>();
	case EnemyType::Warrior:
		return std::make_unique<Warrior>();
	default:
		return nullptr;
	}
}