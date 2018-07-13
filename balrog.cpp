#include "balrog.h"

Balrog::Balrog() {
}
int Balrog::getDamage() {

    int balrogDamage = 0;
    int damage = Demon::getDamage();
    int strength = Creatures::getStrength();
    
    // Balrogs are so fast the yget to attack twice
    srand(time(NULL));
    balrogDamage = (rand() % Demon::getStrength()) + 1;
    std::cout << "Balrog speed attack inflicts" << balrogDamage << " additional damage points!" << std::endl;
    damage = damage + balrogDamage;

    return damage;
}
