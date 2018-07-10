
class Creatures {

    public:
      Creatures();
      Creatures(int, int);
      int getDamage();

    private:
      int getSpecies();
      int type;
      int strength;
      int hitpoints;
      std::string name;
      double payoff;
      double cost;
}


