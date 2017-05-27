#include "BulletEvent.class.hpp"

int BulletEvent::getBulletCount() { return bullet_count; }

Bullet *BulletEvent::getBullets() { return bullets; }

BulletEvent::BulletEvent(BulletEvent const & copy) {
  *this = copy;
}

BulletEvent::BulletEvent( void ) {
  bullet_count = 0;
}

BulletEvent::BulletEvent( int const bullets ) {
  bullet_count = bullets;
}

BulletEvent::~BulletEvent ( void ) {
  //delete [] bullets;
}

BulletEvent & BulletEvent::operator=( BulletEvent const & copy ) {
  if ( this != &copy ) {
    //this->setRawBits(copy.getRawBits()
  }
  return *this;
}

void BulletEvent::moveBullets() {
  for (int i = 0; i < bullet_count; i++) {
    bullets[bullet_count].Move();
  }
}

void BulletEvent::genBullet(int x, int y) {
  bullets[bullet_count].setX(x);
  bullets[bullet_count].setY(y);
  bullet_count++;
}

std::ostream & operator<<(std::ostream & o, BulletEvent const & rhs)
{
    BulletEvent copy(rhs);
    // o  << copy.getRounds();
    return o;
}
