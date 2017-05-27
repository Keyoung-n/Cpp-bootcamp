#include "Player.class.hpp"

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
  y = 30;
  x = 10;
}

Player & Player::operator=( Player const & copy ) {
  if ( this != &copy ) {
    this->setX(copy.getX());
    this->setY(copy.getY());
  }
  return *this;
}

std::ostream & operator<<(std::ostream & o, Player const & rhs)
{
    Player copy(rhs);
    o << "This player's and cords are x = " << copy.getX() << " y = " << copy.getY();
    return o;
}
