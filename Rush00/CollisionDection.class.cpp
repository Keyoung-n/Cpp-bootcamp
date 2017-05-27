#include "CollisionDection.class.hpp"

CollisionDection::CollisionDection(CollisionDection const & copy) {
  *this = copy;
}

CollisionDection::CollisionDection( void ) {
}

CollisionDection::~CollisionDection ( void ) {
}

CollisionDection & CollisionDection::operator=( CollisionDection const & copy ) {
  if ( this != &copy ) {
    *this = copy;
  }
  return *this;
}

int CollisionDection::moveBullets(BulletEvent *bullets) {
  Bullet *allbullets = bullets->getBullets();
  for (int i = 0; i < bullets->getBulletCount(); i++) {
    if (allbullets[i].getX() == 5 && allbullets[i].getY() == 0) {
      // Deletes Bullet
      return i;
    }
  }
  return 0;
}

int CollisionDection::movePlayer(Player hero) {
  if (hero.getX() == 0 && hero.getY() == 0)
    return 1;
  return 0;
}

std::ostream & operator<<(std::ostream & o, CollisionDection const & rhs)
{
    CollisionDection copy(rhs);
    o  << "This class detects collisions";
    return o;
}
