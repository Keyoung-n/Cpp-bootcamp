#include "Fixed.class.hpp"

Fixed::Fixed(Fixed const & copy) {
  *this = copy;
}

Fixed::Fixed( void ) {
  value = 0;
}

Fixed::Fixed( int const n ) {
  value = n << bits;
}

Fixed::Fixed ( float const n ) {
  value = (int)roundf(n * (1 << bits));
}

Fixed::~Fixed ( void ) {
}

Fixed & Fixed::operator=( Fixed const & copy ) {
  if ( this != &copy )
    this->setRawBits(copy.getRawBits());
  return *this;
}

bool & Fixed::operator>( Fixed const & rhs ) {
  bool *ret = new bool;
  *ret = (this->value > rhs.value) ? true : false;
  return *ret;
}

bool & Fixed::operator<( Fixed const & rhs) {
  bool *ret = new bool;
  *ret = (this->value < rhs.value) ? true : false;
  return *ret;
}

bool & Fixed::operator>=( Fixed const & rhs) {
  bool *ret = new bool;
  *ret = (this->value >= rhs.value) ? true : false;
  return *ret;
}

bool & Fixed::operator<=( Fixed const & rhs) {
  bool *ret = new bool;
  *ret = (this->value <= rhs.value) ? true : false;
  return *ret;
}

bool & Fixed::operator==( Fixed const & rhs) {
  bool *ret = new bool;
  *ret = (this->value == rhs.value) ? true : false;
  return *ret;
}

bool & Fixed::operator!=( Fixed const & rhs) {
  bool *ret = new bool;
  *ret = (this->value != rhs.value) ? true : false;
  return *ret;
}

Fixed & Fixed::operator++() {
  value++;
  return *this;
}

Fixed & Fixed::operator++(int)
{
  Fixed copy = *this;
  value++;
  return *new Fixed(copy.toFloat());
}

Fixed & Fixed::operator--() {
  return *new Fixed(value--);
}

Fixed & Fixed::operator--(int)
{
  Fixed copy = *this;
  value--;
  return *new Fixed(copy.toFloat());
}

Fixed & Fixed::operator+( Fixed const & rhs ) {
  return *new Fixed(rhs.toFloat() + toFloat());
}

Fixed & Fixed::operator-( Fixed const & rhs ) {
  return *new Fixed(rhs.toFloat() - toFloat());
}

Fixed & Fixed::operator*( Fixed const & rhs ) {
  return *new Fixed(rhs.toFloat() * toFloat());
}

Fixed & Fixed::operator/( Fixed const & rhs ) {
  return *new Fixed(rhs.toFloat() / toFloat());
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

Fixed Fixed::max(Fixed a, Fixed b) {
  if (a > b)
    return a;
  else
    return b;
}

Fixed Fixed::min(Fixed a, Fixed b) {
  if (a < b)
    return a;
  else
    return b;
}
