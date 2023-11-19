#pragma once
#include "utilities.h"



int UTILITIES::printHelp() {
	std::cout << "Help" << std::endl;
	return 0;
}

std::string UTILITIES::checkArguments(int argc, char* argv[]) {
	if (argc == 1)
		return "";
	else {
		std::string argument;
		for (int i = 1; i < argc; i++){
			argument = argv[i];
			std::cout << argument << std::endl;
		}
		return argument;
	}
}