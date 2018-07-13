#include <iostream>
#include <vector>
#include <cstdlib>
#include "demon.h"

Demon::Demon() {
}
int Demon::getDamage() {
    int damage = Creatures::getDamage();

    if((rand() % 100) < 5) {
      damage = damage + 50;
      std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
    }

    return damage;
}
