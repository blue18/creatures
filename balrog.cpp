#include "balrog.h"

Balrog::Balrog() {
    setType(3);
    setStrength(20);
    setHitpoints(100);
}
int Balrog::getDamage() {

    int balrogDamage = 0;
    int damage = Demon::getDamage();
    
    // Balrogs are so fast the yget to attack twice
    srand(time(NULL));
    balrogDamage = (rand() % Demon::getStrength()) + 1;
    std::cout << "Balrog speed attack inflicts " << balrogDamage << " additional damage points!" << std::endl;
    damage = damage + balrogDamage;

    return damage;
}
void Balrog::setName(std::string name) {
    Creatures::setName(name);
    std::cout << "The name entered was: " << Creatures::getName() << std::endl;
}
