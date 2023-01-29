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
		Fixed 	&operator=(const Fixed &src);
		bool	operator>(const Fixed &src);
		bool	operator<(const Fixed &src);
		bool	operator<=(const Fixed &src);
		bool	operator>=(const Fixed &src);
		bool	operator==(const Fixed &src);
		bool	operator!=(const Fixed &src);
		Fixed	operator+(const Fixed &src);
		Fixed	operator-(const Fixed &src);
		Fixed	operator*(const Fixed &src);
		Fixed	operator/(const Fixed &src);
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		static 	Fixed 		&min(Fixed &first, Fixed &second);
		static 	const Fixed &min(Fixed const &first, Fixed const &second);
		static 	Fixed 		&max(Fixed &first, Fixed &second);
		static 	const Fixed &max(Fixed const &first, Fixed const &second);
		float 	toFloat(void)const;
		int 	toInt(void)const;
		int		getRawBits(void) const;
		void	setRawBits(int const ptfixed);
		~Fixed();
};

std::ostream &operator<<(std::ostream &op, const Fixed &original);

#endif