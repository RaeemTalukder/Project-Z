#pragma once
#include <cstdint>

class LevelSystem{
public:

	LevelSystem() {
		CurrentLevel = 1u;
		CurrentEXP = 0u;
	}
	void gainEXP(std::uint64_t gained_exp) {
		CurrentEXP += gained_exp;
		check_if_level();
	}
protected: 
	std::uint16_t CurrentLevel;
	std::uint16_t LevelUpsAvailable;
	std::uint64_t CurrentEXP;

	void check_if_level() {
		static const std::uint16_t levelupmultipler = 2u;
		static const std::uint64_t level2at = 100u;
		std::uint16_t current_equivalent_level = CurrentLevel + LevelUpsAvailable;
	}
};