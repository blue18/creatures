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
void World::displayCreatureTypes() {
    std::cout << "1. human" << std::endl;
    std::cout << "2. cyberdemon" << std::endl;
    std::cout << "3. elf" << std::endl;
    std::cout << "4. balrog" << std::endl;
}
// Description - add a new creature to the game 
void World::addCreature() {
    std::string name;
    std::string type;

    std::cout << "Enter name of creature: ";
    std::cin >> name;

    displayCreatureTypes();

    std::cout << "Enter type of creature: ";
    std::cin >> type;

    if(type == "human") {
	selectCreature(HUMAN);
    } else if(type == "elf") {
	selectCreature(ELF);
    } else if(type == "cyberdemon") {
	selectCreature(CYBERDEMON);
    } else if(type == "balrog") {
	selectCreature(BALROG);
    } else {
	std::cout << "Error" << std::endl;
    }
}

// Description - Select the type of creature 
void World::selectCreature(creature_type type) {
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
    aHuman.setName("test1"); 
    //std::cout << "line 52" << std::endl;
    //std::cout << aHuman.getName() << std::endl;
}
