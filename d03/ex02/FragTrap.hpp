#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

public:
  FragTrap(std::string name);
  ~FragTrap ();
  FragTrap ( FragTrap const & dhs );

  int vaulthunter_dot_exe(std::string const &target);
  void ballBuster(std::string const target);
  void blasterAttack(std::string const target);
  void Explosion(std::string const target);
  void exWife(std::string const target);
  void lazerAttack(std::string const target);
};

#endif
