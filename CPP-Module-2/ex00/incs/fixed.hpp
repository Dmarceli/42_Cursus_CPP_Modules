#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>
#include <cstdlib>
#include<iostream>

typedef std::string	str;

class Fixed {
	private:
		int _fixedpt;
		static const int _frbits;
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &src);
		int		getRawBits(void) const;
		void	setRawBits(int const ptfixed);
		~Fixed();
};

#endif