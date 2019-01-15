#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Conductor.h"

class GameManager {
public:
	GameManager(sf::RenderWindow* window);
	~GameManager();

	void getInput(sf::Keyboard::Key);
	void update();
	

private:
	sf::RenderWindow* window;
	Conductor conductor;
};

