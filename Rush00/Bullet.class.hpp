#ifndef BULLET_HPP
#define BULLET_HPP
#include <iostream>

class Bullet {
private:
  int x;
  int y;

public:
  Bullet ( void );
  Bullet ( int x, int y );
  Bullet ( Bullet const & copy );
  Bullet & operator=( Bullet const & copy );
  ~Bullet ( void );
  void Move();
  int getX( void ) const;
  void setX( int const value );
  int getY( void ) const;
  void setY( int const value );
};

std::ostream & operator<<(std::ostream & o, Bullet const & rhs);
#endif
