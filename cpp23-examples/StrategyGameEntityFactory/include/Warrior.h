#pragma once

#include "Enemy.h"

class Warrior : public IEnemy {
public:
    void attack() const override;
    std::string_view get_type() const noexcept override;
};