#include "Victim.hpp"

victim::victim (std::string n) {
  std::cout << "Some random victim called " << n << " just popped !" << '\n';
  name = n;
}

victim::~victim() {
  std::cout << "Victim " << name << " just died for no apparent reason !" << '\n';
}

victim::victim ( victim const & copy ) {
  *this = copy;
}

victim& victim::operator=( victim const & copy ) {
  if ( this != &copy ) {
    victim new_copy(copy);
    this->setName(new_copy.getName());
  }
  return *this;
}

std::ostream & operator<<(std::ostream & o, victim const & rhs)
{
    victim copy(rhs);
    o << "I'm " << copy.getName() << " and I like otters !";
    return o;
}

std::string victim::getName() {
  return name;
}

void victim::setName(std::string n) {
  name = n;
}
