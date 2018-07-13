#include <iostream>
#include <vector>
#include <cstdlib>
#include "demon.h"

// Description - Constructor
Demon::Demon() {

}

// Description - Destructor
Demon::~Demon() {

}
int Demon::getDamage() {
    int damage = Creatures::getDamage();

    srand(time(NULL));
    // There is a 5% chance that the demon will inflict 50 additonal damage points. 
    if((rand() % 100) < 5) {
      damage = damage + 50;
      std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
    }

    return damage;
}
