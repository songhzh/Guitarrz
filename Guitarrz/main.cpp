#include <SFML/Graphics.hpp>
#include "GameManager.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 900), "Guitarrz", sf::Style::Titlebar | sf::Style::Close);
	window.setFramerateLimit(60);
	window.setKeyRepeatEnabled(false);

	GameManager gm(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed)
				gm.getInput(event.key.code);
		}

		window.clear();
		gm.update();
		window.display();
	}

	return 0;
}