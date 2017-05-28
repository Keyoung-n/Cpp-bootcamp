#include "Game.class.hpp"

Player Game::getPlayer() { return hero; }

BulletEvent Game::getBullets() { return bullets; }

void Game::setHero(Player new_player) { hero = new_player; }

void Game::setBullets(BulletEvent new_bullets) { bullets = new_bullets; }

Game::Game(Game const & copy) {
	*this = copy;
}

Game::Game( void ) {
	initscr();
	noecho();
	curs_set(FALSE);
	keypad(stdscr, TRUE);
	// BulletEvent allbullets;
	// bullets = allbullets;
//	EnemyEvent allenemies;
//	enemies = allenemies;
}

void Game::start() {
	Draw game;
	enemies.setEnemyCount(0);
	game.Redraw(hero, &bullets, &enemies);
	struct timeval	start;
	struct timeval	end;
	int ch;
	int game_over = 0;
	score = 0;
	int loop = 0;;
	while (game_over == 0 && score != 1000) {
		gettimeofday(&start, NULL);
		clear();
		nodelay(stdscr, TRUE);
		ch = getch();
		if (ch != -1)
			inputHandle(ch);
		score += dection.moveBullets(&bullets, &enemies);
		bullets.moveBullets();
		score += dection.moveBullets(&bullets, &enemies);
		enemies.moveEnemies();
		if (loop % 25 == 0)
			enemies.genEnemy();
		game.Redraw(hero, &bullets, &enemies);
		refresh();
		score++;
		gettimeofday(&end, NULL);
		loop++;
		game_over = dection.movePlayer(hero, &enemies);
		usleep( 60000 - (end.tv_usec - start.tv_usec) );
	}
}

void Game::inputHandle(int c) {
	switch(c) {
		case KEY_UP:
			if (hero.getY() != 0)
				hero.decY();
			break;
		case KEY_DOWN:
			if (hero.getY() != 62)
				hero.incY();
			break;
		case KEY_LEFT:
			if (hero.getX() != 0)
				hero.decX();
			break;
		case KEY_RIGHT:
			if (hero.getX() != 271)
				hero.incX();
			break;
		case 32:
			bullets.genBullet(hero.getX() + 1, hero.getY());
			break;
	}
}

Game::~Game ( void ) {
	endwin();
	if (score == 5000)
		std::cout << "Yay you won!" << '\n';
	else
		std::cout << "Your score was " << score << '\n';
}

Game & Game::operator=( Game const & copy ) {
	if ( this != &copy ) {
		Game new_game(copy);
		setHero(new_game.getPlayer());
		setBullets(new_game.getBullets());
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Game const & rhs)
{
	Game copy(rhs);
	o  << "This game is running...";
	return o;
}
