#include "cyberdemon.h"

Cyberdemon::Cyberdemon() {
    setType(2);
    setStrength(20);
    setHitpoints(100);
}
int Cyberdemon::getDamage() {
    return (Demon::getDamage());
}
void Cyberdemon::setName(std::string name) {
    Creatures::setName(name); 
    std::cout << "The name entered was: " << Creatures::getName() << std::endl;
}
