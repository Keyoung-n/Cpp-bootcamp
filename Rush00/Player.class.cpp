#include "Player.class.hpp"

int Player::getScore( void ) const {return  score;}

void Player::setScore( int const value ) {score = value;}

void Player::setX( int const value ) {x = value;}

int Player::getX( void ) const {return x;}

void Player::setY(int const value ) {y = value;}

int Player::getY( void ) const {return y;}

void Player::incX() {x++;}

void Player::decX() {x--;}

void Player::incY() {y++;}

void Player::decY() {y--;}

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

std::ostream & operator<<(std::ostream & o, Player const & rhs)
{
    Player copy(rhs);
    // o << rhs.toFloat();
    return o;
}
