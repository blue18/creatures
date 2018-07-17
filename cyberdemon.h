#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "demon.h"

class Cyberdemon : public Demon {
    public:
      Cyberdemon();
      int getDamage();
      void setName(std::string);
    private:
};
#endif
