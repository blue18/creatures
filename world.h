#ifndef WORLD_H
#define WORLD_H

#include <iostream>
#include <queue>
#include "elf.h"
#include "cyberdemon.h"
#include "human.h"
#include "balrog.h"

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
    private:
      std::queue<Human> listOfHumans;
      std::queue<Elf> listOfElves;
      std::queue<Cyberdemon> listOfCyberdemon;
      std::queue<Balrog> listOfBalrogs;

};

#endif 
