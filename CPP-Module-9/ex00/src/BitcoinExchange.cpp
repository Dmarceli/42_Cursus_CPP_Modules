#include "BitcoinExchange.hpp"

bool is_all_digit(str string)
{
	if (string.length() < 14 && !isdigit(string[14]))
		return false;
	for (size_t i = 0; i < string.length(); i++) 
	{
		if(!isdigit(string[i]) && string[i] != '-' && string[i] != ' ' && string[i] != '|' && string[i] != '.'  )
		{
			std::cout << "Error: bad input => " << string << std::endl;
			return false;
		}
	}
	return true;
}

bool fileisvalid(const char *fileName)
{
	std::ifstream file(fileName);
	return (file.good());
}
