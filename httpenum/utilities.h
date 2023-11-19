#pragma once
#include <iostream>
#include <string.h>

class UTILITIES {

public:
	std::string checkArguments(int argc, char* argv[]); // checks input arguments
	static int printHelp(); // prints help message

};