#ifndef ELF_H
#define ELF_H
#include "creature.h"

class Elf : public Creatures {
    public:
      Elf();
      int getDamage();
      void setName(std::string name);
    private:

};
#endif 
