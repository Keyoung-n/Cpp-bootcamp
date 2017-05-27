#ifndef Draw_HPP
#define Draw_HPP
#include <ncurses.h>
#include <iostream>
#include "Player.class.hpp"


class Draw {
private:

public:
  Draw ( void );
  Draw ( int const n );
  Draw ( Draw const & copy );
  void Redraw (Player hero);
  Draw & operator=( Draw const & copy );
  ~Draw ( void );
};

std::ostream & operator<<(std::ostream & o, Draw const & rhs);
#endif
