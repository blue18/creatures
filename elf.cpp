#include "elf.h"
#include <iostream>

Elf::Elf() {

}
int Elf::getDamage() {
    int damage = Creatures::getDamage();

    // Elves inflict double magical damage with a 10% chance 
    srand(time(NULL));
    if((rand() % 10) == 0) {
        std::cout << "Magical attack inflicts " << damage << " additional damage points!" << std::endl;
        damage = damage * 2;
    }
    return damage;
}

void Elf::setName(std::string name) {
     Creatures::setName(name);
     std::cout << "The name entered was: " << Creatures::getName() << std::endl;
}
int Elf::getHitpoints() {
    return (Creatures::getHitpoints());
}
