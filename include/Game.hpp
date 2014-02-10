#ifndef GAME_HPP
#define GAME_HPP

#include"World.hpp"
#include<SFML/Graphics.hpp>

class Game {
public:
						Game();
						~Game();
	void 				main();
private:
	World				world_;

	sf::RenderWindow*	window_;
	sf::Event			event_;

	void				checkEvents();
	void				update();
	void				render();
};

#endif
