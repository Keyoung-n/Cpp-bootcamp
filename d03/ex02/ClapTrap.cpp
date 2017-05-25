#include "ClapTrap.hpp"

std::string ClapTrap::getName() { return Name; }
int ClapTrap::getHit() { return Hit; }
int ClapTrap::getMax_hit_points() { return Max_hit_points; }
int ClapTrap::getEnergy_points() { return Energy_points; }
int ClapTrap::getMax_energy_points() { return Max_energy_points; }
int ClapTrap::getLevel() { return Level; }
int ClapTrap::getMelee_attack_damage() { return Melee_attack_damage; }
int ClapTrap::getRanged_attack_damage() { return Ranged_attack_damage; }
int ClapTrap::getArmor_damage_reduction() { return Armor_damage_reduction; }
void ClapTrap::setHit (int param) { Hit = param; };
void ClapTrap::setMax_hit_points (int param) { Max_hit_points = param; };
void ClapTrap::setEnergy_points (int param) { Energy_points = param; };
void ClapTrap::setMax_energy_points (int param) { Max_energy_points = param; };
void ClapTrap::setLevel (int param) { Level = param; };
void ClapTrap::setMelee_attack_damage (int param) { Melee_attack_damage = param; };
void ClapTrap::setRanged_attack_damage (int param) { Ranged_attack_damage = param; };
void ClapTrap::setArmor_damage_reduction (int param) { Armor_damage_reduction = param; };

ClapTrap::ClapTrap(std::string name, int HP, int EN, int MAXHP, int MAXEP, int ME, int RD, int AR) {
  std::cout << "Creating ClapTrap.." << '\n';
  Hit = HP;
  Name = name;
  Max_hit_points = MAXHP;
  Max_energy_points = MAXEP;
  Energy_points = EN;
  Level = 1;
  Melee_attack_damage = ME;
  Ranged_attack_damage = RD;
  Armor_damage_reduction = AR;
}

ClapTrap::~ClapTrap () {
  std::cout << "Destroing ClapTrap..." << '\n';
}

int ClapTrap::rangedAttack(std::string const & target) {
  std::cout << "FR4G-TP " << Name << " attacks " << target << " at range, causing " << Ranged_attack_damage << " points of damage " << '\n';
  return Ranged_attack_damage;
}

int ClapTrap::meleeAttack(std::string const & target) {
  std::cout << "FR4G-TP " << Name << " attacks " << target << " at range, causing " << Melee_attack_damage << " points of damage " << '\n';
  return Melee_attack_damage;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if ((int)(Hit - (amount - Armor_damage_reduction)) <= 0)
    Hit = 0;
  else
    Hit -= amount - Armor_damage_reduction;
  std::cout << "FR4G-TP "<< Name << " takes " << amount - Armor_damage_reduction << " damage " << '\n';
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << "FR4G-TP repairs with " << amount << " health " << '\n';
  if ((int)(Hit + amount) >= Max_hit_points)
    Hit = Max_hit_points;
  else
    Hit += amount;
}

ClapTrap::ClapTrap ( ClapTrap const & dhs ) {
  *this = dhs;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & dhs ) {
  if ( this != &dhs ) {
    ClapTrap copy(dhs);
    setHit(copy.getHit());
    setMax_hit_points(copy.getMax_hit_points());
    setMax_energy_points(copy.getMax_energy_points());
    setEnergy_points(copy.getEnergy_points());
    setLevel(copy.getLevel());
    setMelee_attack_damage(copy.getMelee_attack_damage());
    setRanged_attack_damage(copy.getRanged_attack_damage());
    setArmor_damage_reduction(copy.getArmor_damage_reduction());
  }
  return *this;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs) {
  ClapTrap copy(rhs);
  o << copy.getName();
  return o;
}
