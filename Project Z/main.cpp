

#include <iostream>
#include "Player.h"
int main()
{
    Player p1;
    std::cout << "Player \n"
        << "-MaxHP: " << p1.getMaxHP() << '\n'
        << "-Vitality" << p1.getVitality() << '\n'
        << "-Endurance: " << p1.getEndurance() << '\n'
        << "-Strength: " << p1.getStrength() << '\n'
        << "-Dexterity: " << p1.getDexterity() << '\n'
        << "-Skill: " << p1.getSkill() << '\n'
        << "-Luck: " << p1.getLuck() << '\n';
};

