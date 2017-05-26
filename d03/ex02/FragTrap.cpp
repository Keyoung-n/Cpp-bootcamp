#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
  std::cout << name << " was Created. :D" << '\n';
  Hit = 100;
  Max_hit_points = 100;
  Max_energy_points = 100;
  Energy_points = 100;
  Level = 1;
  Melee_attack_damage = 30;
  Ranged_attack_damage = 20;
  Armor_damage_reduction = 5;
  Name = name;
}

FragTrap::~FragTrap () {
  std::cout << "FR4G-TP " << Name << " Was destroyed. :'(" << '\n';
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
