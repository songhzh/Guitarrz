#pragma once
#include <iostream>
#include <fstream>

class Timing {
public:
	Timing();
	~Timing();
	bool openFile(std::string file);
private:
	std::ifstream timing;
};

