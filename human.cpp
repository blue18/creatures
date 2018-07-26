#include "human.h"
#include <iostream>

Human::Human() {
    Creatures(0, 10, 100);
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
