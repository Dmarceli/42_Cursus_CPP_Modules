#include "BitcoinExchange.hpp"


bool is_all_digit(str string)
{
	for (size_t i = 0; i < string.length(); i++) 
	{
		if(!isdigit(string[i]) && string[i] != '-' && string[i] != ' ' && string[i] != '|')
			return false;
	}
	return true;
}

bool fileisvalid(const char *fileName)
{
	std::ifstream file(fileName);
	return (file.good());
}
