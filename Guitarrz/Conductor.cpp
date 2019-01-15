#include "Conductor.h"

bool Conductor::setMusic(std::string file) {
	if (!music.openFromFile(file))
		return false;

	music.play();
	return true;
}

void Conductor::togglePause() {

	if (music.getStatus() == sf::SoundSource::Playing)
		music.pause();
	else if (music.getStatus() == sf::SoundSource::Paused)
		music.play();


	std::cout << music.getPlayingOffset().asSeconds() << std::endl;
}