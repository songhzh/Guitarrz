#include "GameManager.h"



GameManager::GameManager(sf::RenderWindow* window) {
	this->window = window;
	if (!conductor.setMusic("music/test/audio.ogg")) {
		// error
	}
}


GameManager::~GameManager()
{
}

void GameManager::getInput(sf::Keyboard::Key key) {
	if (key == sf::Keyboard::Space)
		conductor.togglePause();
}

void GameManager::update() {
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	window->draw(shape);
}