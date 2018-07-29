#include "human.h"
#include <iostream>

Human::Human() {
    setType(0);
    setStrength(10);
    setHitpoints(10);
}
Human::~Human() { 
}
// Description - Set name to human
void Human::setName(std::string name) {
    // Set the name
    Creatures::setName(name);
    std::cout << "The name entered was: " << Creatures::getName() << std::endl;
}
int Human::getDamage() {
    int damage;
    damage = Creatures::getDamage();
    std::cout << "human damage " << damage << std::endl;
    return damage; 
}
void Human::setHumanIsDead(bool isHumanDead) { 
    Creatures::setCreatureIsDead(isHumanDead);
}
