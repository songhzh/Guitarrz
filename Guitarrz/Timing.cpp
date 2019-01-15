#include "Timing.h"



Timing::Timing() {
}


Timing::~Timing() {
}

bool Timing::openFile(std::string file) {
	timing.open(file);

	return !(!timing);
}