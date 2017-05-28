#ifndef BulletEvent_HPP
#define BulletEvent_HPP
#include <ncurses.h>
#include <iostream>
#include <string>
#include "Bullet.class.hpp"

class BulletEvent {
private:
  Bullet bullets[200];
  int bullet_count;

public:
  BulletEvent ( void );
  BulletEvent ( int const bullets );
  BulletEvent ( BulletEvent const & copy );
  BulletEvent & operator=( BulletEvent const & copy );
  ~BulletEvent ( void );
  void moveBullets();
  void genBullet(int x, int y);
  void desBullet(int pos);
  Bullet *getBullets();
  int getBulletCount();
  void setBulletCount(int new_count);
};

std::ostream & operator<<(std::ostream & o, BulletEvent const & rhs);
#endif
