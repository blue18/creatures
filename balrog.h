#ifndef BALROG_H
#define BALROG_H
#include "demon.h"

class Balrog : public Demon {
    public:
      Balrog();
      int getDamage();
      void setName(std::string name);
    private:
};
#endif 
