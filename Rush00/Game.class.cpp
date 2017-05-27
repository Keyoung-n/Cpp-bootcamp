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
}

void Game::start() {
	Draw game;
	game.Redraw(hero, &bullets);
	struct timeval	start;
	struct timeval	end;
	int ch;
	int game_over = 0;
	while (game_over == 0 && score != 100000) {
		gettimeofday(&start, NULL);
		clear();
		nodelay(stdscr, TRUE);
		ch = getch();
		if (ch != -1)
			inputHandle(ch);
		game_over = dection.movePlayer(hero);
		bullets.moveBullets();
		game.Redraw(hero, &bullets);
		refresh();
		score++;
		gettimeofday(&end, NULL);
		if (start.tv_usec < end.tv_usec)
		   start.tv_usec = end.tv_usec;;
		usleep( 30000 - (end.tv_usec - start.tv_usec) );
	}
}

void Game::inputHandle(int c) {
	getmaxyx(stdscr, max_y, max_x);
	switch(c) {
		case KEY_UP:
			if (hero.getY() != 0)
				hero.decY();
			break;
		case KEY_DOWN:
			if (hero.getY() < max_y)
				hero.incY();
			break;
		case KEY_LEFT:
			if (hero.getX() != 0)
				hero.decX();
			break;
		case KEY_RIGHT:
			if (hero.getX() < max_x)
				hero.incX();
			break;
		case 32:
			bullets.genBullet(hero.getX() + 1, hero.getY());
			break;
	}
}

Game::~Game ( void ) {
	endwin();
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
