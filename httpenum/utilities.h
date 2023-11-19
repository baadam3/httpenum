#pragma once
#include <iostream>
#include <string.h>

class UTILITIES {

public:
	void checkArguments(int argc, char* argv[]); // checks input arguments

private:
	static int printHelp(); // prints help message

};