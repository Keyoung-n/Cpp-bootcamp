#ifndef SCAV_HPP
#define SCAV_HPP
#include <cmath>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ~ScavTrap ();
  int rangedAttack(std::string const & target);
  int meleeAttack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void challengeNewcomer(std::string const &target);
  void gunFight(std::string const target);
  void swordFight(std::string const target);
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs);

#endif
