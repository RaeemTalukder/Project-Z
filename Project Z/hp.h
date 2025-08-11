#pragma once
#include <cstdint>
class hp {
public:
	bool setMaxHP(std::uint16_t new_max_hp) {
		if (new_max_hp < 1)
			return false;
		MaxHP = new_max_hp;
		if (CurrentHP > MaxHP) {
			CurrentHP = MaxHP;
			return true;
		}

	}
	void takeDamage(std::uint16_t damage) {
		if (damage > CurrentHP){
			CurrentHP = 0;
		return;
		}
		CurrentHP -= damage;

	}

	void heal(std::uint16_t amount) {
		if (amount + CurrentHP > MaxHP) {
			CurrentHP = MaxHP;
			return;
		}
		CurrentHP += amount;
	}
	hp() {CurrentHP = 1; MaxHP = 1;}
	hp(std::uint16_t cHP, std::uint16_t mHP) {
		CurrentHP = cHP;
			MaxHP = mHP;
			if (CurrentHP > MaxHP) {
				CurrentHP = MaxHP;
			}
	}
	std::uint16_t getMaxHP() {
		return MaxHP;
	}
	std::uint16_t getCurrentHP() {
		return CurrentHP;
	}
private:
	std::uint16_t ArmorHP;
	std::uint16_t CurrentHP;
	std::uint16_t MaxHP;
};