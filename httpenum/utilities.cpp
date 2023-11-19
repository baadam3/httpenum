#pragma once
#include "utilities.h"

int UTILITIES::printHelp()  // prints the help message
{ 
	std::cout << "-h, --help\tPrints this help menu.\n" 
		<< std::endl;
	return 0;
}

void UTILITIES::checkArguments(int argc, char* argv[]) 
{
	if (argc == 1)  // if there are no arguments
	{ 
		printHelp();
		return;
	}
	else 
	{
		std::string argument;
		for (int i = 1; i < argc; i++)  // iterates thrugh all given arguments
		{ 
			argument = argv[i];
			if (argc != 2 && (argument == "-h" or argument == "--help"))  // if there are more than 1 arguments and one is -h or --help
			{ 
				std::cout << "For usage information use -h or --help." << std::endl;
				return;
			} 
			else if (argument == "-h" or argument == "--help") 
			{
				printHelp();
				return;
			}
		}
		printHelp();  // if no conditions met prints help menu
		return;
	}
}