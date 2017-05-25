#include "FragTrap.hpp"

std::string getName() { return name; }
int getHit() { return Hit; }
int getMax_hit_points() { return Max_hit_points; }
int getEnergy_points() { return Energy_points; }
int getMax_energy_points() { return Max_energy_points; }
int getLevel() { return Level; }
int getMelee_attack_damage() { return Melee_attack_damage; }
int getRanged_attack_damage() { return Ranged_attack_damage; }
int getArmor_damage_reduction() { return Armor_damage_reduction; }
void setHit (int param) { Hit = param; };
void setMax_hit_points (int param) { Max_hit_points = param; };
void setEnergy_points (int param) { Energy_points = param; };
void setMax_energy_points (int param) { Max_energy_points = param; };
void setLevel (int param) { Level = param; };
void setMelee_attack_damage (int param) { Melee_attack_damage = param; };
void setRanged_attack_damage (int param) { Ranged_attack_damage = param; };
void setArmor_damage_reduction (int param) { Armor_damage_reduction = param; };

FragTrap::FragTrap(std::string name): Name(name) {
  std::cout << name << " was Created. :D" << '\n';
  Hit = 100;
  Max_hit_points = 100;
  Max_energy_points = 100;
  Energy_points = 100;
  Level = 1;
  Melee_attack_damage = 30;
  Ranged_attack_damage = 20;
  Armor_damage_reduction = 5;
}

FragTrap::~FragTrap () {
  std::cout << "Was destroyed. :'(" << '\n';
}

int FragTrap::rangedAttack(std::string const & target) {
  std::cout << "FR4G-TP " << Name << " attacks " << target << " at range, causing " << Ranged_attack_damage << " points of damage " << '\n';
  return Ranged_attack_damage;
}

int FragTrap::meleeAttack(std::string const & target) {
  std::cout << "FR4G-TP " << Name << " attacks " << target << " at range, causing " << Melee_attack_damage << " points of damage " << '\n';
  return Melee_attack_damage;
}

void FragTrap::takeDamage(unsigned int amount) {
  std::cout << "FR4G-TP takes " << amount - Armor_damage_reduction << " damage " << name;
  if (hit - amount - Armor_damage_reduction < 0)
    hit = 0;
  else
    hit -= amount - Armor_damage_reduction;
}

void FragTrap::beRepaired(unsigned int amount) {
  std::cout << "FR4G-TP repairs with " << amount << " health ";
  if (Hit + amount > Max_hit_points)
    Hit = Max_hit_points;
  else
    Hit += amount;
  if (Energy_points + amount > Max_energy_points)
    Energy_points = Max_energy_points;
  else
    Energy_points += amount;
}

FragTrap ( FragTrap const & dhs ) {
  *this = copy;
}

FragTrap& operator=( FragTrap const & dhs ) {
  if ( this != &dhs ) {
    this->setHit(dhs.getHit());
    this->setMax_hit_points(dhs.getMax_hit_points());
    this->setMax_energy_points(dhs.getMax_energy_points());
    this->setEnergy_points(dhs.getEnergy_points());
    this->setLevel(dhs.getLevel());
    this->setMelee_attack_damage(dhs.getMelee_attack_damage());
    this->setRanged_attack_damage(dhs.getRanged_attack_damage());
    this->setArmor_damage_reduction(dhs.getArmor_damage_reduction());
  }
  return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
  return o;
}
