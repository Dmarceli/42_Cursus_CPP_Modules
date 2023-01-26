#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>
#include <cstdlib>
#include <iostream>
#include <cmath>

typedef std::string	str;

class Fixed {
	private:
		int _fixedpt;
		static const int _frbits = 8;
	public:
		Fixed();
		Fixed(const int src);
		Fixed(const float src);
		Fixed &operator=(const Fixed &src);
		float 	toFloat(void)const;
		int 	toInt(void)const;
		int		getRawBits(void) const;
		void	setRawBits(int const ptfixed);
		~Fixed();
};

std::ostream &operator<<(std::ostream &op, const Fixed &original);

#endif