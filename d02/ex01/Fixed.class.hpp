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
  Fixed & operator=( Fixed const & copy );
  ~Fixed ( void );
  int getRawBits( void ) const;
  void setRawBits( int const raw );
};
#endif
