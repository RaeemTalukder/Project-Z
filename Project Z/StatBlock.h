#pragma once
#include <cstdint>
class StatBlock {
	std::uint16_t Vitality; //hp
	std::uint16_t Endurance; //food/water/stamina
	std::uint16_t Strength; // melee weapon dmg
	std::uint16_t Dexterity; // initiative/ movement
	std::uint16_t Skill; // accuracy with guns
	std::uint16_t Luck;  // general luck stat
public:
	StatBlock(std::uint16_t v, std::uint16_t e, std::uint16_t s, std::uint16_t d, std::uint16_t sk, std::uint16_t l) {
		Vitality = v;
		Endurance = e;
		Strength = s;
		Dexterity = d;
		Skill = sk;
		Luck = l;
	};
	std::uint16_t getVitality() { return Vitality; }
	std::uint16_t getEndurance() { return Endurance; }
	std::uint16_t getStrength() { return Strength; }
	std::uint16_t getDexterity() { return Dexterity; }
	std::uint16_t getSkill() { return Skill; }
	std::uint16_t getLuck() { return Luck; }

};