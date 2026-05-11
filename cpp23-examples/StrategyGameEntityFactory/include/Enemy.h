#pragma once

#include <string_view>

class IEnemy {
public:
	virtual ~IEnemy() = default;

	virtual void attack() const = 0;
	virtual std::string_view get_type() const noexcept = 0;
};