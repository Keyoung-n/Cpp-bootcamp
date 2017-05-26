#include "Sorcerer.hpp"

Sorcerer::Sorcerer (std::string n, std::string t) {
  std::cout << n << ", " << t << ", is born !" << '\n';
  name = n;
  title = t;
}

Sorcerer::~Sorcerer() {
  std::cout << name << ", " << title << ", is dead. Consequences will never be the same !" << '\n';
}

Sorcerer::Sorcerer ( Sorcerer const & copy ) {
  *this = copy;
}

Sorcerer::Sorcerer & operator=( Sorcerer const & copy ) {
  if ( this != &copy ) {
    Sorcerer new_copy(copy);
    this->setName(new_copy.getName());
    this->setTitle(new_copy.getTitle());
  }
  return *this;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
    Sorcerer copy(rhs);
    o << "I am " << copy.getName() << ", " << copy.getTitle() <<  ", and I like ponies !" << '\n';
    return o;
}

std::string Sorcerer::getName() {
  return name;
}

std::string Sorcerer::getTitle() {
  return title;
}

void Sorcerer::setName(std::string n) {
  name = n;
}

void Sorcerer::setTitle(std::string t) {
  title = t;
}
