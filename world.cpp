#include "world.h" 
#include "cyberdemon.h"
#include "balrog.h"
#include "elf.h"
#include "human.h"
#include <queue>
#include <cstdlib>

World::World() {
}

World::~World() {
}
// Description - Display possible types of creatures
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

    std::cout << "Enter type of creature (Full Name): ";
    std::cin >> type;

    if(type == "human") {
	selectCreature(name, HUMAN);
    } else if(type == "elf") {
	selectCreature(name, ELF);
    } else if(type == "cyberdemon") {
	selectCreature(name, CYBERDEMON);
    } else if(type == "balrog") {
	selectCreature(name, BALROG);
    } else {
	std::cout << "Error" << std::endl;
    }
}

// Description - Select the type of creature 
void World::selectCreature(std::string name, creature_type type) {
    switch(type) {
	case HUMAN: 
	    createHuman(name);
	    break;
	case ELF:
	    createElf(name);
	    break;
	case CYBERDEMON:
	    createCyberdemon(name);
	    break;
	case BALROG:
	    createBalrog(name);
	    break;
	default:
	    std::cout << "Error for selecting creature" << std::endl;
    }
}

void World::createHuman(std::string name) {
    Human aHuman;
    aHuman.setName(name);
    listOfHumans.push_back(aHuman);
}

void World::createElf(std::string name) {
    Elf anElf;
    anElf.setName(name);
    listOfElves.push_back(anElf);
}

void World::createCyberdemon(std::string name) {
    Cyberdemon aCyberdemon;
    aCyberdemon.setName(name);
    listOfCyberdemon.push_back(aCyberdemon);
}

void World::createBalrog(std::string name) {
    Balrog aBalrog;
    aBalrog.setName(name);
    listOfBalrogs.push_back(aBalrog);
}

void World::startRound() {

    // randomly pick the creature that attacks first 
    // Initialize random seed
    srand(time(NULL)); 
    int firstTypePick = rand() % 5;
    int secondTypePick = rand() % 5;

    // rand() % [size of array]
    int firstTypeMemberPick = rand() % 2; 
    int secondTypeMemberPick = rand() % 2; 
     
    Human firstHuman;
    Elf firstElf;
    Cyberdemon firstCyberdemon;
    Balrog firstBalrog;

    Human secondHuman;
    Elf secondElf;
    Cyberdemon secondCyberdemon;
    Balrog secondBalrog;

    int firstDamage;
    int secondDamage;

    std::string respone;


    // Pick first creature
    switch(0) {
       case 0:
	    firstHuman = listOfHumans.at(firstTypeMemberPick);
	    break;
	case 1:
	    firstElf = listOfElves.at(firstTypeMemberPick);
	    break;
	case 2:
	    firstCyberdemon = listOfCyberdemon.at(firstTypeMemberPick);
	    break;
	case 3:
	    firstBalrog = listOfBalrogs.at(firstTypeMemberPick);
	    break;
	default:
	    std::cout << "Error for startSound" << std::endl;
    }

    // Pick second creature
    switch(0) {
	case 0:
	    secondHuman = listOfHumans.at(secondTypeMemberPick);
	    break;
	case 1:
	    secondElf = listOfElves.at(secondTypeMemberPick);
	    break;
	case 2:
	    secondCyberdemon = listOfCyberdemon.at(secondTypeMemberPick); 
	    break;
	case 3:
	    secondBalrog = listOfBalrogs.at(secondTypeMemberPick); 
	    break;
	default:
	    std::cout << "Error for startSound" << std::endl;
	}

    // first creature attacks 
    switch(0) { 
	case 0:
	    // human attacks 
	    firstDamage = firstHuman.getDamage(); 
	    break;
	default:
	    std::cout << "Error for startSound" << std::endl;

    }

    // creature that receives the attack
    switch(0){
	case 0:
	    break;
	case 1:
	    // elfves health -= firstDamage
	    break;
	default:
	    std::cout << "Error for startSound" << std::endl;
    }
    
    // second creature attacks
    switch(0) { 
	case 0:
	    // human attacks 
	    secondDamage = secondHuman.getDamage(); 
	    break;
	case 1:
	    // elf attacks 
	    break;
	case 2: 
	    // cyberdemon attack
	    break;
	case 3:
	    // balrog attack
	    break;
	default:
	    std::cout << "Error for startSound" << std::endl;

    }

    // other creature that receives the attack
    switch(0) {
	case 0: 
	    // Human health -= secondDamage
	case 1:
	    // elf health -= secondDamage
	case 2:
	    // cyber health -= secondDamage 
	case 3:
	    // balrog health -= secondDamage
        default:
	    std::cout << "Error for startSound" << std::endl;
    }

    // ask the user if more creatures will be added
    std::cout << "Would you like to add a new creature? " << std::endl;
    std::cin >> respone;

}












