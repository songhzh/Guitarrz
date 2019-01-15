#pragma once
#include <iostream>
#include <SFML/Audio.hpp>
#include "Timing.h"

class Conductor : public sf::Music
{
public:
	bool setMusic(std::string file);
	void togglePause();

private:
	sf::Music music;
	Timing timing;
};

