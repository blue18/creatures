#ifndef HUMAN_H
#define HUMAN_H
#include "creature.h"
class Human : public Creatures {

    public:
      Human();
      ~Human();
      int getDamage();
      void setName(std::string);
      void humanIsDead();
      void setHumanIsDead(bool);
      bool getHumanIsDead();      
    private:
};
#endif 
