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

FragTrap::FragTrap(std::string name): Name(name) {
  Hit = 100;
  Max_hit_points = 100;
  Max_energy_points = 100;
  Level = 1;
  Melee_attack_damage = 30;
  Ranged_attack_damage = 20;
  Armor_damage_reduction = 5;
}

int Fixed::rangedAttack(std::string const & target) {
  std::cout << "int rangedAttack(std::string const & target)" << '\n';
}
