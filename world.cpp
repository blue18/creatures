#include "world.h" 
#include <queue>

World::World() {

}
World::~World() {

}
// Description - add a new creature to the game 
void World::addCreature() {
    std::string name;
    std::string type;

    std::cout << "Enter name of creature: ";
    std::cin >> name;
    std::cout << "Enter type of creature: ";
    std::cin >> type;
}
