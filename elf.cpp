#include "elf.h"

Elf::Elf() {

}
int Elf::getDamage() {
    int damage = Demon::getDamage();

    // Elves inflict double magical damage with a 10% chance 
    srand(time(NULL));
    if((rand() % 10) == 0) {
        std::cout << "Magical attack inflicts " << damage << " additional damage points!" << std::endl;
        damage = damage * 2;
    }
    return damage;
}