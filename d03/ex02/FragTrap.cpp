#include "FragTrap.hpp"

std::string FragTrap::getName() { return Name; }
int FragTrap::getHit() { return Hit; }
int FragTrap::getMax_hit_points() { return Max_hit_points; }
int FragTrap::getEnergy_points() { return Energy_points; }
int FragTrap::getMax_energy_points() { return Max_energy_points; }
int FragTrap::getLevel() { return Level; }
int FragTrap::getMelee_attack_damage() { return Melee_attack_damage; }
int FragTrap::getRanged_attack_damage() { return Ranged_attack_damage; }
int FragTrap::getArmor_damage_reduction() { return Armor_damage_reduction; }
void FragTrap::setHit (int param) { Hit = param; };
void FragTrap::setMax_hit_points (int param) { Max_hit_points = param; };
void FragTrap::setEnergy_points (int param) { Energy_points = param; };
void FragTrap::setMax_energy_points (int param) { Max_energy_points = param; };
void FragTrap::setLevel (int param) { Level = param; };
void FragTrap::setMelee_attack_damage (int param) { Melee_attack_damage = param; };
void FragTrap::setRanged_attack_damage (int param) { Ranged_attack_damage = param; };
void FragTrap::setArmor_damage_reduction (int param) { Armor_damage_reduction = param; };

FragTrap::FragTrap(std::string name): Name(name) {
  std::cout << Name << " was Created. :D" << '\n';
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
  std::cout << "FR4G-TP " << Name << " Was destroyed. :'(" << '\n';
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
  if ((int)(Hit - (amount - Armor_damage_reduction)) <= 0)
    Hit = 0;
  else
    Hit -= amount - Armor_damage_reduction;
  std::cout << "FR4G-TP "<< Name << " takes " << amount - Armor_damage_reduction << " damage " << '\n';
}

void FragTrap::beRepaired(unsigned int amount) {
  std::cout << "FR4G-TP repairs with " << amount << " health " << '\n';
  if ((int)(Hit + amount) >= Max_hit_points)
    Hit = Max_hit_points;
  else
    Hit += amount;
}

FragTrap::FragTrap ( FragTrap const & dhs ) {
  *this = dhs;
}

FragTrap & FragTrap::operator=( FragTrap const & dhs ) {
  if ( this != &dhs ) {
    FragTrap copy(dhs);
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

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs) {
  FragTrap copy(rhs);
  o << copy.getName();
  return o;
}

void FragTrap::ballBuster(std::string const target) {
  std::cout << "FR4G-TP " << Name << " Attacked " << target << " With a strong attack "<< '\n';
}
void FragTrap::blasterAttack(std::string const target) {
  std::cout << "FR4G-TP " << Name << " Attacked " << target << " With a very strong attack"<< '\n';
}
void FragTrap::Explosion(std::string const target) {
  std::cout << "FR4G-TP " << Name << " Attacked " << target << " With a strong attack"<< '\n';
}
void FragTrap::exWife(std::string const target) {
  std::cout << "FR4G-TP " << Name << " Attacked " << target << " With a very weak attack"<< '\n';
}
void FragTrap::lazerAttack(std::string const target) {
  std::cout << "FR4G-TP " << Name << " Attacked " << target << " With a normal attack"<< '\n';
}

int	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int			random;

	if (Energy_points >= 25)
	{
		Energy_points -= 25;
    srand(time(0));
		random = (rand() % 4) + 1;
    switch (random) {
      case 1:
        ballBuster(target);
        return 10;
      break;
      case 2:
        blasterAttack(target);
        return 50;
      break;
      case 3:
        Explosion(target);
        return 50;
      break;
      case 4:
        exWife(target);
        return 2;
      break;
      case 5:
        lazerAttack(target);
        return (20);
      break;
    }
	}
	else
		std::cout << "Energy Too low" << std::endl;
  return (0);
}
