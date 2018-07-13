#include <iostream>

class Creatures {

    public:
      Creatures();
      Creatures(int newType, int newStrength, int newHit);
      ~Creatures();
      int getDamage();
      int getStrength();
    private:
      std::string getSpecies();
      int type;
      int strength;
      int hitpoints;
      std::string name;
      double payoff;
      double cost;
};


