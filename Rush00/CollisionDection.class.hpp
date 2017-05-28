#ifndef CollisionDection_HPP
#define CollisionDection_HPP
#include "BulletEvent.class.hpp"
#include "Bullet.class.hpp"
#include "Player.class.hpp"
#include "EnemyEvent.class.hpp"

class CollisionDection {
private:


public:
  CollisionDection ( void );
  ~CollisionDection ( void );
  int moveBullets(BulletEvent *bullets, EnemyEvent *enemies);
  int movePlayer(Player hero, EnemyEvent *enemies);
  CollisionDection ( CollisionDection const & copy );
  CollisionDection & operator=( CollisionDection const & copy );
};

std::ostream & operator<<(std::ostream & o, CollisionDection const & rhs);
#endif
