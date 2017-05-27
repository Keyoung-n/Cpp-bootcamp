#include "Draw.class.hpp"

Draw::Draw(Draw const & copy) {
  *this = copy;
}

Draw::Draw( void ) {
}

Draw::~Draw ( void ) {

}

void Draw::Redraw(Player hero) {
  mvprintw(hero.getY(), hero.getX(), "o");
}

Draw & Draw::operator=( Draw const & copy ) {
  if ( this != &copy )
    std::cout << "hmm" << '\n';
  //   this->setRawBits(copy.getRawBits());
  return *this;
}
