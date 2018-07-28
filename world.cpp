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
Human* World::humanPick(Human* aHuman, int typeMemberPick, int typePick) {
    if(listOfHumans.size() > 0) {
	typeMemberPick = rand() % listOfHumans.size();
	aHuman = &(listOfHumans.at(typeMemberPick));
	std::cout << "First pick: " << aHuman->getName() << std::endl;
	std::cout << "Current health: " << aHuman->getHitpoints() << std::endl;
	return (aHuman);
    } else {
	std::cout << "There are no humans in the list" << std::endl;
	exit(EXIT_FAILURE);
    }
}
Elf* World::elfPick(Elf* anElf, int typeMemberPick, int typePick) {
    if(listOfElves.size() > 0) {
	typeMemberPick = rand() % listOfElves.size();
	anElf = &(listOfElves.at(typeMemberPick));
	std::cout << "first pick: " << anElf->getName() << std::endl;
	std::cout << "current health: " << anElf->getHitpoints() << std::endl;
	return anElf; 
    } else {
	std::cout << "There are no elves in the list" << std::endl;
	exit(EXIT_FAILURE);
    }
}
Cyberdemon* World::cyberdemonPick(Cyberdemon* aCyberdemon, int typeMemberPick, int typePick) {
    if(listOfCyberdemon.size() > 0) {
	typeMemberPick = rand() % listOfCyberdemon.size();
	aCyberdemon= &(listOfCyberdemon.at(typeMemberPick));
	std::cout << "first pick: " << aCyberdemon->getName() << std::endl;
	std::cout << "current health: " << aCyberdemon->getHitpoints() << std::endl;
	return aCyberdemon; 
    } else {
	std::cout << "There are no cyberdemons in the list" << std::endl;
	exit(EXIT_FAILURE);
    }
}
Balrog* World::balrogPick(Balrog* aBalrog, int typeMemberPick, int typePick) {
    if(listOfBalrogs.size() > 0) {
	typeMemberPick = rand() % listOfBalrogs.size();
	aBalrog = &(listOfBalrogs.at(typeMemberPick));
	std::cout << "first pick: " << aBalrog->getName() << std::endl;
	std::cout << "current health: " << aBalrog->getHitpoints() << std::endl;
	return aBalrog; 
    } else {
	std::cout << "There are no balrog in the list" << std::endl;
	exit(EXIT_FAILURE);
    }
}

void World::startRound() {

    // randomly pick the creature that attacks first 
    // Initialize random seed
    srand(time(NULL)); 
    int firstTypePick = 0;
    int secondTypePick = 0;

    // rand() % [size of array]
    int firstTypeMemberPick = 0;//rand() % listOfHumans.size(); 
    int secondTypeMemberPick = 0;//rand() % listOfElves.size(); 

    Human* firstHuman = NULL;
    Elf* firstElf = NULL;
    Cyberdemon* firstCyberdemon = NULL;
    Balrog* firstBalrog = NULL;

    Human* secondHuman = NULL;
    Elf* secondElf = NULL;
    Cyberdemon* secondCyberdemon = NULL;
    Balrog* secondBalrog = NULL;

    int firstDamage = 0;
    int secondDamage = 0;

    std::string respone;

    std::cout << "====================================" << std::endl;
    do {

	while(firstTypePick == secondTypePick) {
	    firstTypePick = rand() % 4;
	    secondTypePick = rand() % 4;
        }

	// Pick first creature
	switch(firstTypePick) {
	    case 0:
		firstHuman = humanPick(firstHuman, firstTypeMemberPick, firstTypePick);
		break;
	    case 1:
		firstElf = elfPick(firstElf, firstTypeMemberPick, firstTypePick);
		break;
	    case 2:
		firstCyberdemon= cyberdemonPick(firstCyberdemon, firstTypeMemberPick, firstTypePick);
		break;
	    case 3:
		firstBalrog = balrogPick(firstBalrog, firstTypeMemberPick, firstTypePick);
		break;
	    default:
		std::cout << "Error for startSound(1)" << std::endl;
	}

	std::cout << "====================================" << std::endl;

	// Pick second creature
	switch(secondTypePick) {
	    case 0:
		secondHuman = humanPick(secondHuman, secondTypeMemberPick, secondTypePick);
		break;
	    case 1:
		secondElf = elfPick(secondElf, secondTypeMemberPick, secondTypePick);
		break;
	    case 2:
		secondCyberdemon = cyberdemonPick(secondCyberdemon, secondTypeMemberPick, secondTypePick);
		break;
	    case 3:
		secondBalrog = balrogPick(secondBalrog, secondTypeMemberPick, secondTypePick);
		break;
	    default:
		std::cout << "Error for startSound(2)" << std::endl;
	    }

	std::cout << "====================================" << std::endl;

	// Get attack value from first creature
	switch(firstTypePick) { 
	    case 0:
		firstDamage = firstHuman->getDamage();
		break;
	    case 1:
		firstDamage = firstElf->getDamage();
		break;
	    case 2:
		firstDamage = firstCyberdemon->getDamage();
		break;
	    case 3:
		firstDamage = firstBalrog->getDamage();
		break;
	    default:
		std::cout << "Error on line 220" << std::endl;
	}

	std::cout << "====================================" << std::endl;

	// Get attack value from second creature
	switch(secondTypePick) { 
	    case 0:
		secondDamage = secondHuman->getDamage();
		break;
	    case 1:
		secondDamage = secondElf->getDamage();
		break;
	    case 2:
		secondDamage = secondCyberdemon->getDamage();
		break;
	    case 3:
		secondDamage = secondBalrog->getDamage();
		break;
	    default:
		std::cout << "Error for startRoudn(4)" << std::endl;
	}   

	std::cout << "==============After Attack======================" << std::endl;
	
	// Calculate the damage 
	switch(firstTypePick) {
	    case 0: 
		firstHuman->setHitpoints(firstHuman->getHitpoints() - secondDamage); 
		std::cout << "Name: " << firstHuman->getName() << "health: " << firstHuman->getHitpoints() << std::endl;
		break;
	    case 1:
		firstElf->setHitpoints(firstElf->getHitpoints() - secondDamage); 
		std::cout << "Name: " << firstElf->getName() << "health: " << firstElf->getHitpoints() << std::endl;
		break;
	    case 2:
		firstCyberdemon->setHitpoints(firstCyberdemon->getHitpoints() - secondDamage); 
		std::cout << "Name: " << firstCyberdemon->getName() << "health: " << firstCyberdemon->getHitpoints() << std::endl;
		break;
	    case 3:
		firstBalrog->setHitpoints(firstBalrog->getHitpoints() - secondDamage); 
		std::cout << "Name: " << firstBalrog->getName() << "health: " << firstBalrog->getHitpoints() << std::endl;
		break;
	    default:
		std::cout << "Error for startSound(5)" << std::endl;
	}

	switch(secondTypePick) {
	    case 0: 
		// Human health -= secondDamage
		secondHuman->setHitpoints(secondHuman->getHitpoints() - firstDamage); 
		std::cout << "Name: " << secondHuman->getName() << "health: " << secondHuman->getHitpoints() << std::endl;
		break;
	    case 1:
		// elf health -= secondDamage
		secondElf->setHitpoints(secondElf->getHitpoints() - firstDamage); 
		std::cout << "Name: " << secondElf->getName() << "health: " << secondElf->getHitpoints() << std::endl;
		break;
	    case 2:
		// cyber health -= secondDamage 
		secondCyberdemon->setHitpoints(secondCyberdemon->getHitpoints() - firstDamage); 
		std::cout << "Name: " << secondCyberdemon->getName() << "health: " << secondCyberdemon->getHitpoints() << std::endl;
		break;
	    case 3:
		// balrog health -= secondDamage
		secondBalrog->setHitpoints(secondBalrog->getHitpoints() - firstDamage); 
		std::cout << "Name: " << secondBalrog->getName() << "health: " << secondBalrog->getHitpoints() << std::endl;
		break;
	    default:
		std::cout << "Error for startSound(5)" << std::endl;
	}
	// Reset values
	firstTypePick = 0;
	secondTypePick = 0;

	// ask the user if more creatures will be added
	std::cout << "Would you like to add a new creature? " << std::endl;
	std::cin >> respone;
    } while(respone == "yes");

}












