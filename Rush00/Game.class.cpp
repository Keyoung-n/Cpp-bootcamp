#include "Game.class.hpp"

Game::Game(Game const & copy) {
  *this = copy;
}

Game::Game( void ) {
  initscr();
  noecho();
  curs_set(FALSE);
  keypad(stdscr, TRUE);
  rounds = 200;
  BulletEvent allbullets;
  bullets = &allbullets;
}

void Game::start() {
  Draw game;
  std::string s = std::to_string(bullets->getBulletCount());
  char const *pchar = s.c_str();
  mvprintw(0, 0, pchar);
  game.Redraw(hero, *bullets);
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
        inputHandle(ch);
      game.Redraw(hero, *bullets);
      bullets->genBullet(1, 1);
      refresh();
      usleep(30000);
  }
  sleep(10);
}

void Game::inputHandle(int c) {
  switch(c) {
    case KEY_UP:
      if (hero.getY() != 0)
        hero.decY();
		break;
		case KEY_DOWN:
			  hero.incY();
		break;
    case KEY_LEFT:
      if (hero.getX() != 0)
        hero.decX();
    break;
    case KEY_RIGHT:
      hero.incX();
    break;
    case 32:
      bullets->genBullet(hero.getX() + 1, hero.getY());
    break;
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
