#include <iostream>
#include <vector>
#include <cstdlib>
#include "creature.h"

// Description - Constructor
Creatures::Creatures() {
    type = 0;
    strength = 10;
    hitpoints = 10;
}

// Description - Initilize creature to new type, strength, hit points
// Paramters   - newType the type of creature
//             - newStrenght the amount of strength of creature
//             - newHit the amount of hitpoints of creature
Creatures::Creatures(int newType, int newStrength, int newHit) {
    type = newType;
    strength = newStrength;
    hitpoints = newHit;
}

// Description - Destructor
Creatures::~Creatures() {
    std::cout << "Creature destroyed." << std::endl;
}

// Description - The damage inflicted from this creature in one round.
int Creatures::getDamage() {

    int damage = 0;
    damage = (rand() % strength) + 1;
    std::cout << getSpecies() << " attacks for " << damage << " points!" << std::endl;
    return damage;
}

// Description - Get the identify of this creature.
std::string Creatures::getSpecies() {
    switch(type) {
    	case 0: return "Human";
    	case 1: return "Cyberdemon";
    	case 2: return "Balrog";
    	case 3: return "Elf";
    }
    return "Unknown";
}
// Descriptioin - Get strength
int Creatures::getStrength() {
    return (this->strength);
}
// Description - Get hit points
int Creatures::getHitpoints() {
    return (this->hitpoints);

}
// Description - Get name
std::string Creatures::getName() {
    return (this->name);

}
// Description - Get payoff
double Creatures::getPayoff() {
    return (this->payoff);

}
// Description - Get cost
double Creatures::getCost() {
    return (this->cost);
}