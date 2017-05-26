#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
  Name = name;
  std::cout << "SK4G-TP " << Name << " was Assembled. ;)" << '\n';
  Hit = 100;
  Max_hit_points = 100;
  Max_energy_points = 50;
  Energy_points = 50;
  Level = 1;
  Melee_attack_damage = 20;
  Ranged_attack_damage = 16;
  Armor_damage_reduction = 3;
}

ScavTrap::~ScavTrap () {
  std::cout << "SK4G-TP " << Name << " Was Blown up. :o" << '\n';
}

int ScavTrap::rangedAttack(std::string const & target) {
  std::cout << "SK4G-TP " << Name << " hits " << target << " at range, causing " << Ranged_attack_damage << " points of damage " << '\n';
  return Ranged_attack_damage;
}

int ScavTrap::meleeAttack(std::string const & target) {
  std::cout << "SK4G-TP " << Name << " hits " << target << " at melee, causing " << Melee_attack_damage << " points of damage. " << '\n';
  return Melee_attack_damage;
}

void ScavTrap::takeDamage(unsigned int amount) {
  if ((int)(Hit - (amount - Armor_damage_reduction)) <= 0)
    Hit = 0;
  else
    Hit -= amount - Armor_damage_reduction;
  std::cout << "SK4G-TP "<< Name << " gets hit by " << amount - Armor_damage_reduction << " damage " << '\n';
}

void ScavTrap::beRepaired(unsigned int amount) {
  std::cout << "SK4G-TP heals by " << amount << " health " << '\n';
  if ((int)(Hit + amount) >= Max_hit_points)
    Hit = Max_hit_points;
  else
    Hit += amount;
}

void ScavTrap::swordFight(std::string const target) {
  std::cout << Name << " Challenges " << target << " to a sword fight "<< '\n';

  std::cout << "They both take out their swords" << '\n';
  srand(time(0));
  int random = (rand() % 2);
  if (random == 1) {
    std::cout << Name << " is too quick and cuts " << target << " up!! :O" << '\n';
  }
  else {
    std::cout << target << " stabs " << Name << ". :|" << '\n';
  }
}
void ScavTrap::gunFight(std::string const target) {
  std::cout << Name << " Challenges " << target << " to a sword fight "<< '\n';

  std::cout << "They both take out their swords" << '\n';
  srand(time(0));
  int random = (rand() % 2);
  if (random == 1) {
    std::cout << target << " is too quick and shoots " << Name << " up!! :O" << '\n';
  }
  else {
    std::cout << Name << " ducks and shoots  " << target << ". :|" << '\n';
  }
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	int			random;

  srand(time(0));
	random = (int)(floor( 2 * rand() ));
  if (random == 1) {
    gunFight(target);
  }
  else {
    swordFight(target);
  }
}
