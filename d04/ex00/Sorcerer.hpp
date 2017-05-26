#ifndef Sorcerer_HPP
#define Sorcerer_HPP
#include "Victim.hpp"
#include <iostream>

class Sorcerer {
private:
  std::string name;
  std::string title;
  Sorcerer();

public:
  Sorcerer (std::string n, std::string t);
  ~Sorcerer ();
  Sorcerer ( Sorcerer const & copy );
  Sorcerer & operator=( Sorcerer const & copy );
  std::string getName();
  std::string getTitle();
  void setName(std::string n);
  void setTitle(std::string t);
  void polymorph(Victim const &) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);
#endif
