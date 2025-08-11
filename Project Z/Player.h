#pragma once
#include "hp.h"
#include "StatBlock.h"
#include <cstdint>
class Player : public hp, public StatBlock, public LevelSystem{
public: 
	static const std::uint16_t HPGROWTH = 10u;
	static const std::uint16_t BASEVIT = 10u;
	static const std::uint16_t BASEEND = 10u;
	static const std::uint16_t BASESTR = 10u;
	static const std::uint16_t BASEDEX = 10u;
	static const std::uint16_t BASESKI = 10u;
	static const std::uint16_t BASELUC = 10u;

	Player() : hp(HPGROWTH, HPGROWTH), StatBlock(BASEVIT, BASEEND, BASESTR, BASEDEX, BASESKI, BASELUC) {}

private: 
};