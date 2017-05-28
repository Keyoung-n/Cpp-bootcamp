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

int CollisionDection::moveBullets(BulletEvent *bullets, EnemyEvent *enemies) {
  Bullet *allbullets = bullets->getBullets();
	Enemy *allenemies = enemies->getEnemies();
	for (int j = 0; j < enemies->getEnemyCount(); j++) {
		for (int i = 0; i < bullets->getBulletCount(); i++) {
			if (allenemies[j].getY() == allbullets[i].getY() && allenemies[j].getX() == allbullets[i].getX()) {
				bullets->desBullet(i);
				enemies->desEnemy(j);
			}
			else if (allbullets[i].getX() ==  271) {
				bullets->desBullet(i);
			}
		}
	}
  return 0;
}

int CollisionDection::movePlayer(Player hero, EnemyEvent *enemies) {
  Enemy *allenemies = enemies->getEnemies();
  for (int i = 0; i < enemies->getEnemyCount(); i++) {
    if ( hero.getX() == allenemies[i].getX())
      return 1;
  }
  return 0;
}

std::ostream & operator<<(std::ostream & o, CollisionDection const & rhs)
{
    CollisionDection copy(rhs);
    o  << "This class detects collisions";
    return o;
}
