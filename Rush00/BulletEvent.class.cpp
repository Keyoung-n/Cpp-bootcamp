#include "BulletEvent.class.hpp"

int BulletEvent::getBulletCount() { return bullet_count; }

Bullet *BulletEvent::getBullets() { return bullets; }

void BulletEvent::setBulletCount(int new_count) { bullet_count = new_count; }

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
}

BulletEvent & BulletEvent::operator=( BulletEvent const & copy ) {
  if ( this != &copy ) {
    *this = copy;
  }
  return *this;
}

void BulletEvent::moveBullets() {
  for (int i = 0; i < bullet_count; i++) {
    bullets[i].Move();
  }
}

void BulletEvent::genBullet(int x, int y) {
  bullets[bullet_count].setX(x);
  bullets[bullet_count].setY(y);
  bullet_count++;
}

void BulletEvent::desBullet(int pos) {
  bullet_count--;
  for (int i = pos; i < bullet_count; i++) {
    bullets[i].setX(bullets[i + 1].getX());
    bullets[i].setY(bullets[i + 1].getY());
  }
}

std::ostream & operator<<(std::ostream & o, BulletEvent const & rhs)
{
    BulletEvent copy(rhs);
    o  << "Amount of bullets fired is " << copy.getBulletCount();
    return o;
}
