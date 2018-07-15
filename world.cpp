#include "world.h" 
#include "cyberdemon.h"
#include "balrog.h"
#include "elf.h"
#include "human.h"
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

    if(type == "human") {
	selectCreature(HUMAN);
    } else if(type == "elf") {
    
    } else if(type == "cyberdemon") {

    } else if(type == "balrog") {

    } else {
	std::cout << "Error" << std::endl;
    }

}
void World::selectCreature(int type) {
    switch(type) {
	case HUMAN: 
	    createHuman();
	    break;
	case ELF:
	    break;
	case CYBERDEMON:
	    break;
	case BALROG:
	    break;
    }
}
void World::createHuman() {
    Human aHuman;
    std::cout << "line 52" << std::endl;
}
