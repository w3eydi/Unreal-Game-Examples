#include "EnemyManager.h"

int main() {
	EnemyManager enemyManager;

	enemyManager.spawn_enemy(EnemyType::Archer);
	enemyManager.spawn_enemy(EnemyType::Warrior);
	enemyManager.spawn_enemy(EnemyType::Archer);

	enemyManager.update_enemies();

	return 0;
}