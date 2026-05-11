#pragma once

#include "Enemy.h"

class Archer : public IEnemy {
	void attack() const override;
	std::string_view get_type() const noexcept override;
};