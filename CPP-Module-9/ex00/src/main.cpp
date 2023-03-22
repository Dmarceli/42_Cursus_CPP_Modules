#include "../incs/BitcoinExchange.hpp"

int parseDate(str date)
{

	int yy, mm, dd;
	yy = std::atoi(date.substr(0,date.find("-")).c_str());
	mm = std::atoi(date.substr(date.find("-") +1 ,2).c_str());
	dd = std::atoi(date.substr(8).c_str());
	if ( yy > 2023 || yy < 0 || mm <= 0 || mm > 12 || dd <= 0 || dd > 30 
	|| date.length() != 10 || date[4] != '-' || date[7] != '-')
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return(1);
	}
	return(0);
}

int parseValue(double value)
{
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return(1);
	}
	else if (value >= 2147483647)
	{
		std::cout << "Error: too large a number." << std::endl;
		return(1);
	}
	return (0);
}

std::map<str, double> buildMapFromFile(const str& filename)
{
    std::ifstream infile(filename.c_str());
    std::map<str, double> data_map; 
    str line;
	std::getline(infile, line);
    while (std::getline(infile, line)) 
	{
        str date_str = line.substr(0, line.find(","));
        double value = std::atof(line.substr(line.find(",") + 1).c_str());
        data_map[date_str] = value;
    }
    return data_map;
}


void searchInput(const str& filename, std::map<str, double> data_map)
{
	std::ifstream infile(filename.c_str());
	str line;
    while (std::getline(infile, line)) 
	{
		if (!is_all_digit(line))
			continue;
		str date_str = line.substr(0, line.find("|") -1);
		double value = std::atof(line.substr(line.find("|") + 1).c_str());
		if(parseDate(date_str) || parseValue(value))
			continue;
		std::map<str, double>::iterator it = data_map.find(date_str);
    	if (it == data_map.end())
		{
            it = data_map.lower_bound(date_str);
            if (it != data_map.begin()) 
                --it;
		}
		std::cout << date_str << " => "<< it->second * value << "\n";
    }
}

int main(int ac, char **av)
{
	if (ac != 2 || !fileisvalid(av[1]))
	{
		std::cerr << "Couldn't open file.\n"; 
		return(-1);
	}
	std::map<str, double> data_map = buildMapFromFile("data.csv");
	searchInput(av[1], data_map);
}