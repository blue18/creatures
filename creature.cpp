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
}

// Description - The damage inflicted from this creature in one round.
int Creatures::getDamage() {

    int damage = 0;
    damage = (rand() % strength) + 1;
    return damage;
}

// Description - Get the identify of this creature.
std::string Creatures::getSpecies() {
    switch(type) {
    	case 0: return "Human";
    	case 1: return "Elf";
    	case 2: return "Cyberdemon";
    	case 3: return "Balrog";
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
// Description - Set name
// Parameters  - name the name given to this creature
void Creatures::setName(std::string name) {
    this->name = name;
}
void Creatures::setHitpoints(int hitpoints) {
    this->hitpoints = hitpoints;
}
void Creatures::setType(int type) {
    this->type = type;
}
void Creatures::setStrength(int strength) {
    this->strength = strength;
}
void Creatures::setCreatureIsDead(bool creatureIsDead) {
    this->creatureIsDead = creatureIsDead;
}
bool Creatures::getCreatureIsDead() {
    return (this->creatureIsDead);
}
