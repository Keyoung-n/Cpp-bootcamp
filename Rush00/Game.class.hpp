#ifndef Game_HPP
#define Game_HPP
#include "BulletEvent.class.hpp"
#include "Draw.class.hpp"
#include "Player.class.hpp"
#include "CollisionDection.class.hpp"
#include "EnemyEvent.class.hpp"
#include <ctime>
#include <iostream>
#include <sys/time.h>
#include <unistd.h>
#include <ncurses.h>
#include <string>

class Game {
private:
  Player hero;
  BulletEvent bullets;
	EnemyEvent enemies;
  CollisionDection dection;
  int score;

public:
  Game ( void );
  Game ( Game const & copy );
  Game & operator=( Game const & copy );
  ~Game ( void );
  void inputHandle(int c);
  Player getPlayer();
  BulletEvent getBullets();
  void setHero(Player new_player);
  void setBullets(BulletEvent new_bullets);
  void start();
};

std::ostream & operator<<(std::ostream & o, Game const & rhs);
#endif
