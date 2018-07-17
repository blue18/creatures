#include "cyberdemon.h"

Cyberdemon::Cyberdemon() {
}
int Cyberdemon::getDamage() {
    return (Demon::getDamage());
}
void Cyberdemon::setName(std::string name) {
    Creatures::setName(name); 
    std::cout << "The name entered was: " << Creatures::getName() << std::endl;
}
