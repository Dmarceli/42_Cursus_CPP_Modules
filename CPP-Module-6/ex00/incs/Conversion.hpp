#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <cstdlib>
#include <iomanip>
#include <limits.h>
#include <float.h>
#include <stddef.h>
#include <sstream>

# define INF_ 0
# define INFF_ 1
# define NINF_ 2
# define NINFF_ 3
# define NAN_ 4
# define NANF_ 5
# define INT_ 6
# define CHAR_ 7
# define FLOAT_ 8
# define DOUBLE_ 9

#define BLANK "\033[0m"
#define RED "\033[38;5;1m"
#define PURPLE "\033[38;5;13m"
#define YELLOW "\033[33m"
#define BLUE "\033[38;5;14m"
#define GREEN "\033[38;5;47m"
#define ORANGE "\033[38;5;208m"

typedef std::string	str;

class Conversion
{

	public:
		Conversion(str input);
		Conversion(Conversion const &src);
		~Conversion();
		Conversion &operator=(Conversion const &src);
		void 	FindArgType(void);
		void	Convert(void);
		void	PrintToOtherTypes(void);
		void	handleINFSAndNAN(void);
	private:
		Conversion();
		str		_Arg;
		int		_argType;
};

std::ostream &			operator<<( std::ostream & o, Conversion& i );

#endif 