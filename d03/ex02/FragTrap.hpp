#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

public:
  FragTrap(std::string name);
  int vaulthunter_dot_exe(std::string const &target);
  void ballBuster(std::string const target);
  void blasterAttack(std::string const target);
  void Explosion(std::string const target);
  void exWife(std::string const target);
  void lazerAttack(std::string const target);
};

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs);

#endif
