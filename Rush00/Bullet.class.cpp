#include "Bullet.class.hpp"

void Bullet::setX( int const value ) {x = value;}

int Bullet::getX( void ) const {return x;}

void Bullet::setY(int const value ) {y = value;}

int Bullet::getY( void ) const {return y;}

Bullet::Bullet(Bullet const & copy) {
  *this = copy;
}

Bullet::~Bullet ( void ) {
}

Bullet::Bullet( void ) {
  y = 0;
  x = 0;
}

Bullet::Bullet ( int pointx, int pointy ) {
  x = pointx;
  y = pointy;
}

void Bullet::Move() {
  x++;
}

Bullet& Bullet::operator=( Bullet const & copy ) {
  if ( this != &copy ) {
    Bullet new_bullet(copy);
    setX(new_bullet.getX());
    setY(new_bullet.getY());
  }
  return *this;
}


std::ostream & operator<<(std::ostream & o, Bullet const & rhs)
{
    Bullet copy(rhs);
    o << copy.getY() << copy.getX();
    return o;
}
