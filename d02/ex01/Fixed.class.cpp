#include "Fixed.class.hpp"

Fixed::Fixed(Fixed const & copy) {
  std::cout << "Copy constructor called" << '\n';
  *this = copy;
}

Fixed::Fixed( void ) {
  std::cout << "Default constructor called" << '\n';
}

Fixed::Fixed( int const n ) {
  std::cout << "Int constructor called" << '\n';
  value = n << bits;
}

Fixed::Fixed ( float const n ) {
  std::cout << "Float constructor called" << '\n';
  value = (int)roundf(n * (1 << bits));
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

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}

int Fixed::getRawBits( void ) const {
  return value;
}

void Fixed::setRawBits( int const raw ) {
  value = raw;
}

float Fixed::toFloat() const{
  return (((float)value) / (1 << 8));
}

int Fixed::toInt() const {
  return value >> bits;
}
