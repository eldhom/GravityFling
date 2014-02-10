#include"../include/Game.hpp"

sf::VideoMode			VIDEOMODE(800, 600);
sf::String				TITLE("Loot!");
sf::Uint32				STYLE(sf::Style::Default);
sf::ContextSettings		CONTEXTSETTINGS(0, 0, 8, 2, 0);

Game::Game()
{
	window_ = new sf::RenderWindow(VIDEOMODE, TITLE, STYLE, CONTEXTSETTINGS);
}

Game::~Game()
{
	delete window_;
}

void Game::main()
{
}
