#ifndef Game_HPP
#define Game_HPP
#include <ncurses.h>
#include <unistd.h>
#include <string>
#include "Player.class.hpp"
#include "Draw.class.hpp"

class Game {
private:
  Player hero;
  int rounds;

public:
  Game ( void );
  Game ( int const rnd );
  Game ( Game const & copy );
  Game & operator=( Game const & copy );
  ~Game ( void );
  int getRounds();
  void start();
};

std::ostream & operator<<(std::ostream & o, Game const & rhs);
#endif
