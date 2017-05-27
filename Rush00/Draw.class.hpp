#ifndef Draw_HPP
#define Draw_HPP
#include <ncurses.h>
#include <iostream>
#include <string>
#include "Player.class.hpp"
#include "BulletEvent.class.hpp"

class Draw {
public:
  Draw ( void );
  Draw ( int const n );
  Draw ( Draw const & copy );
  void Redraw(Player hero, BulletEvent *bullets);
  Draw & operator=( Draw const & copy );
  ~Draw ( void );
};

std::ostream & operator<<(std::ostream & o, Draw const & rhs);
#endif
