#include "Enemy.class.hpp"

Enemy::Enemy( void ) {
//	int max_x = 220;
//	int max_y = 62;
//
//	srand((unsigned)time(0));
//	y = max_y;
//	x = ((rand() % 10));
//	x = 1;
//	active = true;
}

Enemy::~Enemy( void ) {
}

Enemy::Enemy(int const xi, int const yi) {
	x = xi;
	y = yi;
	active = true;
}

Enemy & Enemy::operator=( Enemy const & copy ) {
	this->setX(copy.getX());
	this->setY(copy.getY());
	return *this;
}

void Enemy::setX( int const value ) {
	x = value;
}

int Enemy::getX( void ) const {
	return x;
}

void Enemy::setY(int const value ) {
	y = value;
}

int Enemy::getY( void ) const {
	return y;
}

void Enemy::Move( void ) {
	x--;
}

void Enemy::setActive( void ) {
	active = !active;
}
