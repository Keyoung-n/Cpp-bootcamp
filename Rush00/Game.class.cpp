#include "Game.class.hpp"

Game::Game(Game const & copy) {
  *this = copy;
}

Game::Game( void ) {
  initscr();
  noecho();
  curs_set(FALSE);
  keypad(stdscr, TRUE);
  rounds = 20;
}

void Game::start() {
  Draw game;
  game.Redraw(hero);
  int ch;
  for (int i = 0; i < 10000; i++) {
    ch = 0;
    std::string s = std::to_string(i);
    char const *pchar = s.c_str();
    clear();
    mvprintw(0, 0, pchar);

    nodelay(stdscr, TRUE);
    ch = getch();
    if (ch != -1)
      hero.action(ch);
    game.Redraw(hero);
    refresh();
    //std::cout << c << '\n';
    usleep(30000);
  }
}

Game::Game( int const rnd ) {
  initscr();
  noecho();
  curs_set(FALSE);
  rounds = rnd;
}

Game::~Game ( void ) {
  endwin();
  std::cout << hero.getX() << '\n';
  std::cout << hero.getY() << '\n';
}

Game & Game::operator=( Game const & copy ) {
  if ( this != &copy ) {
    //this->setRawBits(copy.getRawBits()
  }
  return *this;
}

int Game::getRounds() {
  return rounds;
}

std::ostream & operator<<(std::ostream & o, Game const & rhs)
{
    Game copy(rhs);
    // o  << copy.getRounds();
    return o;
}
