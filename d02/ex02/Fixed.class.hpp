#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
  int value;
  static const int bits = 8;

public:
  Fixed ( void );
  Fixed ( int const n );
  Fixed ( float const n );
  Fixed ( Fixed const & copy );
  bool & operator>( Fixed const & rhs );
  bool & operator<( Fixed const & rhs);
  bool & operator>=( Fixed const & rhs);
  bool & operator<=( Fixed const & rhs);
  bool & operator==( Fixed const & rhs);
  bool & operator!=( Fixed const & rhs);
  Fixed & operator+( Fixed const & rhs );
  Fixed & operator-( Fixed const & rhs );
  Fixed & operator*( Fixed const & rhs );
  Fixed & operator/( Fixed const & rhs );
  Fixed & operator=( Fixed const & copy );
  Fixed & operator++( void );
  Fixed & operator--( void );
  Fixed & operator++(int);
  ~Fixed ( void );
  int getRawBits( void ) const;
  void setRawBits( int const raw );
  int toInt() const;
  float toFloat() const;
  static Fixed max(Fixed a, Fixed b);
  static Fixed min(Fixed a, Fixed b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif
