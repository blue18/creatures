#include <iostream>
#include <queue>

class World {
    public:
      World();
      ~World();
    private:
      std::queue<Human> listOfHumans;
      std::queue<Elf> listOfElves;
      std::queue<Cyberdemon> listOfCyberdemon;
      strd::queue<Balrog> listOfBalrogs;
    public:
      void addCreature();
      void addCash();
      void avaiableCash();
      void enterNameOfCreature();
      void startRound();
      void startGame();
      void printTheWinner();
};
