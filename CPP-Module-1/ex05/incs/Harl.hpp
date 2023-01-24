#ifndef HARL_HPP
# define HARL_HPP

#include <fstream>
#include <cstdlib>
#include<iostream>

typedef std::string	str;

class Harl {

	public:
		Harl();
		~Harl();
		void	complain(str level);
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
		void 	(Harl::*_f[4])( void );
};

#endif