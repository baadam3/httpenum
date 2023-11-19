#pragma once
#include <string.h>
#include <iostream>

class UTILITIES
{
 public:
	UTILITIES();
	void checkArguments(int argc, char* argv[]);  // checks input arguments
 private:
	static int printHelp();  // prints help message
};
