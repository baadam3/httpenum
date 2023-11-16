#pragma once
#include <iostream>
#include <string.h>

class HTTPENUM {

public:
	static int printHelp(); // prints help message
	std::string checkArguments(int argc, char* argv[]); // checks input arguments
};