#include <iostream>
#include <vector>
#include <algorithm>
#include "balrog.h"
#include "world.h"

int main() {
    World KO35;
    KO35.createHuman("human1");
    KO35.createHuman("human2");
    KO35.createElf("elf1");
    KO35.createElf("elf2");
    KO35.createCyberdemon("cyberdemon1");
    KO35.createCyberdemon("cyberdemon2");
    KO35.createBalrog("balrog1");
    KO35.createBalrog("balrog2");
    KO35.startRound();
    return 0;
      
}
