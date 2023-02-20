#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <iterator>
# include <vector>
# include <algorithm>
# include <list>
# include <stdexcept>

#define PURPLE "\033[38;5;13m"
#define ORANGE "\033[38;5;208m"
#define BLANK "\033[0m"

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw(){
			return ("value not found");
		};
};

template <typename T>
typename T::iterator easyfind(T container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw NotFoundException();
	else
    	return it;
}

#endif 