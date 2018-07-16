#include "human.h"
#include <iostream>

Human::Human() {
}
Human::~Human() { 
}
// Description - Set name to human
void Human::setName(std::string name) {
    // Set the name
    Creatures::setName(name);
    std::cout << "The name entered was: " << Creatures::getName() << std::endl;
}
