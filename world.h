#ifndef WORLD_H
#define WORLD_H

#include <iostream>
#include <queue>
#include "elf.h"
#include "cyberdemon.h"
#include "human.h"
#include "balrog.h"

enum creature_type {HUMAN = 0, ELF = 1, CYBERDEMON = 2, BALROG = 3};

class World {

    public:
      World();
      ~World();
      void addCreature();
      void addCash();
      void avaiableCash();
      void enterNameOfCreature();
      void startRound();
      void startGame();
      void printTheWinner();
      void selectCreature(std::string, creature_type);
      void createHuman(std::string);
      void createElf(std::string);
      void createCyberdemon(std::string);
      void createBalrog(std::string);
      void displayCreatureTypes();
      void pickACreature(int, int); 
      void humanPick(Human, int, int);
      void elfPick(Elf, int, int);
      void cyberdemonPick(Cyberdemon, int, int);
      void balrogPick(Balrog, int, int);

    private:
      std::vector<Human> listOfHumans;
      std::vector<Elf> listOfElves;
      std::vector<Cyberdemon> listOfCyberdemon;
      std::vector<Balrog> listOfBalrogs;
};

#endif 
