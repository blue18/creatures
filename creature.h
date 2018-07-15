#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>

class Creatures {

    public:
      Creatures();
      Creatures(int newType, int newStrength, int newHit);
      ~Creatures();
      int getDamage();
      int getStrength();
      int getHitpoints();
      std::string getName();
      double getPayoff();
      double getCost();
    private:
      std::string getSpecies();
      int type;
      int strength;
      int hitpoints;
      std::string name;
      double payoff;
      double cost;
};


#endif 
