#ifndef WORLD_H
#define WORLD_H

#include <iostream>
#include <queue>
#include "elf.h"
#include "cyberdemon.h"
#include "human.h"
#include "balrog.h"

enum {HUMAN = 0, ELF = 1, CYBERDEMON = 2, BALROG = 3};

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
      void selectCreature(int);
      void createHuman();
    private:
      std::queue<Human> listOfHumans;
      std::queue<Elf> listOfElves;
      std::queue<Cyberdemon> listOfCyberdemon;
      std::queue<Balrog> listOfBalrogs;

};

#endif 
