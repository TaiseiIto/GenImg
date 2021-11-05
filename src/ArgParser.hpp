#ifndef _ARG_PARSER_HPP_
#define _ARG_PARSER_HPP_

#include <string>
#include <vector>

class ArgParser
{
private:
	std::vector<std::string> args;
public:
	ArgParser(unsigned int argc, char const * const * const argv);
	void print_args(void)const;
};

#endif

