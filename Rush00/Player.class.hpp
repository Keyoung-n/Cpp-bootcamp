#ifndef Player_HPP
#define Player_HPP
#include <iostream>

class Player {
private:
int x;
int y;

public:
  Player ( void );
  Player ( Player const & copy );
  Player & operator=( Player const & copy );
  ~Player ( void );
  int getX( void ) const;
  void setX( int const value );
  int getY( void ) const;
  void setY( int const value );
  void incX();
  void decX();
  void incY();
  void decY();
};

std::ostream & operator<<(std::ostream & o, Player const & rhs);
#endif
