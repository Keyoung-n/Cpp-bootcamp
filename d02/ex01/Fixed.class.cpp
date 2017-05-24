#include "Fixed.class.hpp"

Fixed::Fixed(Fixed const & copy) {
  std::cout << "Copy constructor called" << '\n';
  *this = copy;
}

Fixed::Fixed( void ) {
  std::cout << "Default constructor called" << '\n';
}

Fixed::Fixed( int const n ) {
    value = n << bits;
}

Fixed::Fixed ( float const n ) {
  value = (int)roundf(n);
}

Fixed::~Fixed ( void ) {
  std::cout << "Destructor called" << '\n';
}

Fixed & Fixed::operator=( Fixed const & copy ) {
  std::cout << "Assignation operator called" << '\n';
  if ( this != &copy )
    this->setRawBits(copy.getRawBits());
  return *this;
}

int Fixed::getRawBits( void ) const {
  std::cout << "getRawBits member function called" << '\n';
  return value;
}

void Fixed::setRawBits( int const raw ) {
  value = raw;
}
