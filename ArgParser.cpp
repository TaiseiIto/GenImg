#include <iostream>
#include "ArgParser.hpp"

ArgParser::ArgParser(unsigned int argc, char const * const * const argv) : args(std::vector<std::string>())
{
	for(unsigned int argc_i = 0; argc_i < argc; argc_i++)
		args.emplace_back(argv[argc_i]);
}

void ArgParser::print_args(void)const
{
	for(std::vector<std::string>::const_iterator arg_i = args.begin(); arg_i != args.end(); arg_i++)
		std::cout << "argv[" << std::distance(args.begin(), arg_i) << "] = \"" << *arg_i << "\"" << std::endl;
}

