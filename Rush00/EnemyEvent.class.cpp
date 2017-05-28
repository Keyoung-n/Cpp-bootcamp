#include "EnemyEvent.class.hpp"

int EnemyEvent::getEnemyCount() { return enemy_count; }

Enemy *EnemyEvent::getEnemies() { return enemies; }

void EnemyEvent::setEnemyCount(int new_count) { enemy_count = new_count; }

EnemyEvent::EnemyEvent( void ) {
	enemy_count = 0;
	s = 0;
}

EnemyEvent::EnemyEvent(EnemyEvent const & copy) {
*this = copy;
}
EnemyEvent::EnemyEvent( int const enemies ) {
	enemy_count = enemies;
}

EnemyEvent::~EnemyEvent ( void ) {
}

EnemyEvent & EnemyEvent::operator=( EnemyEvent const & copy ) {
	if ( this != &copy ) {
		*this = copy;
	}
	return *this;
}

void EnemyEvent::moveEnemies() {
	for (int i = 0; i < enemy_count; i++) {
		enemies[i].Move();
	}
}

void EnemyEvent::genEnemy( void ) {
	int max_x = 275;
	int max_y = 62;
	int x;
	int y;

	s += (unsigned)time(0);
	srand(s);
	s++;
	y = ((rand() % max_y));
	x = max_x;
	enemies[enemy_count].setX(max_x);
	enemies[enemy_count].setY(y);
	enemy_count++;
}

void EnemyEvent::desEnemy(int pos) {
	enemy_count--;
	for (int i = pos; i < enemy_count; i++) {
		enemies[i].setX(enemies[i + 1].getX());
		enemies[i].setY(enemies[i + 1].getY());
	}
}

std::ostream & operator<<(std::ostream & o, EnemyEvent const & rhs)
{
	EnemyEvent copy(rhs);
	o  << "Amount of enemies alive." << copy.getEnemyCount();
	return o;
}
