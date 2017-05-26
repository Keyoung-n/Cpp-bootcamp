#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class victim {
private:
  std::string name;
  victim();

public:
  victim (std::string n);
  ~victim ();
  victim ( victim const & copy );
  victim & operator=( victim const & copy );
  std::string getName();
  void setName(std::string n);
};

std::ostream & operator<<(std::ostream & o, victim const & rhs);
#endif
