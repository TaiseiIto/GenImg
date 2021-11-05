#include <iostream>
#include "ArgParser.hpp"

int main(int argc, char const * const * const argv)
{
	ArgParser arg_parser = ArgParser((unsigned int)argc, argv);
	arg_parser.print_args();
	return EXIT_SUCCESS;
}

