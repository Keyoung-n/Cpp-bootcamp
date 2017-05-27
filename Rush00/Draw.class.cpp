#include "Draw.class.hpp"

Draw::Draw(Draw const & copy) {
  *this = copy;
}

Draw::Draw( void ) {
}

Draw::~Draw ( void ) {

}

void Draw::Redraw(Player hero, BulletEvent *bullets) {
  mvprintw(hero.getY(), hero.getX(), ">");
  Bullet *allbullets = bullets->getBullets();
  for (int i = 0; i < bullets->getBulletCount(); i++) {
      mvprintw(allbullets[i].getY(), allbullets[i].getX(), "-");
      allbullets[i].setX(allbullets[i].getX() + 1);
  }
}

Draw & Draw::operator=( Draw const & copy ) {
  if ( this != &copy )
    std::cout << "hmm" << '\n';
  //   this->setRawBits(copy.getRawBits());
  return *this;
}
