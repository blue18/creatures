#include <iostream>
#include <vector>
#include <cstdlib>
#include "creature.h"

int Creatures::getDamage() {

   int damage; 
   damage = (rand() % strength) + 1;

    return damage;
}

