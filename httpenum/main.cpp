#include <iostream>
#include "utilities.h"

int main(int argc, char *argv[])
{
	UTILITIES program = UTILITIES::UTILITIES();
	program.checkArguments(argc, argv);
	return 0;
}