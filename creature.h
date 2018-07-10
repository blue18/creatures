class Creatures {

    public:
      Creatures();
      Creatures(int newType, int newStrength, int newHit);
      ~Creatures();
      int getDamage();

    private:
      int getSpecies();
      int type;
      int strength;
      int hitpoints;
      std::string name;
      double payoff;
      double cost;
};


