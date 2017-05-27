#include "Player.class.hpp"

Player::Player(Player const & copy) {
  *this = copy;
}

Player::~Player ( void ) {
}

Player::Player( void ) {
  score = 0;
  y = 30;
  x = 0;
}

Player::Player ( int const n ) {
  int max_y;
  int max_x;
  score = n;

  getmaxyx(stdscr, max_y, max_x);
  y = (int)roundf(max_y / 2);
  x = 0;
}

Player & Player::operator=( Player const & copy ) {
  if ( this != &copy )
    this->setScore(copy.getScore());
    this->setX(copy.getX());
    this->setY(copy.getY());
  return *this;
}

Player & Player::operator++() {
  score++;
  return *this;
}

int Player::getScore( void ) const {
  return  score;
}

void Player::setScore( int const value ) {
  score = value;
}

void Player::setX( int const value ) {
  x = value;
}

int Player::getX( void ) const {
  return x;
}

void Player::setY(int const value ) {
  y = value;
}

int Player::getY( void ) const {
  return y;
}

void Player::action(int c) {
  switch(c) {
    case KEY_UP:
      if (y != 0)
        y--;
		break;
		case KEY_DOWN:
			  y++;
		break;
    case KEY_LEFT:
      if (x != 0)
        x--;
    break;
    case KEY_RIGHT:
      x++;
    break;
    case 32:
      std::cout << "shoot" << '\n';
    break;
	}
}
std::ostream & operator<<(std::ostream & o, Player const & rhs)
{
    Player copy(rhs);
    // o << rhs.toFloat();
    return o;
}
