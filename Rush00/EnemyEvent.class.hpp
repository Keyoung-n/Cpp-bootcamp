#ifndef EnemyEvent_HPP
#define EnemyEvent_HPP
#include <ncurses.h>
#include <iostream>
#include <string>
#include "Enemy.class.hpp"

class EnemyEvent {
private:
	Enemy enemies[1024];
	int enemy_count;
	int s;

public:
	EnemyEvent ( void );
	EnemyEvent ( int const enemies );
	EnemyEvent ( EnemyEvent const & copy );
	EnemyEvent & operator=( EnemyEvent const & copy );
	~EnemyEvent ( void );
	void moveEnemies();
	void genEnemy(void);
	void desEnemy(int pos);
	Enemy *getEnemies();
	int getEnemyCount();
	void setEnemyCount(int new_count);
};

std::ostream & operator<<(std::ostream & o, EnemyEvent const & rhs);
#endif