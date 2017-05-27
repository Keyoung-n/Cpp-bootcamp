#include "Draw.class.hpp"

Draw::Draw(Draw const & copy) {
  *this = copy;
}

Draw::Draw( void ) {
}

Draw::~Draw ( void ) {

}

void Draw::Redraw(Player hero, BulletEvent bullets) {
  mvprintw(hero.getY(), hero.getX(), ">");
  Bullet *allbullets = bullets.getBullets();
  std::string s = std::to_string(bullets.getBulletCount());
  char const *pchar = s.c_str();
  mvprintw(1, 1, pchar);
  refresh();
  for (int i = 0; i < bullets.getBulletCount(); i++) {
     mvprintw(allbullets[i].getY(), allbullets[i].getX(), "-");
  }
}

Draw & Draw::operator=( Draw const & copy ) {
  if ( this != &copy )
    std::cout << "hmm" << '\n';
  //   this->setRawBits(copy.getRawBits());
  return *this;
}
