#ifndef HARL_HPP
# define HARL_HPP

#include <fstream>
#include <cstdlib>
#include<iostream>

typedef std::string	str;



class Harl {
	typedef struct s_comments
	{
		str		comment;
		void	(Harl::*action)(void);
	} t_action;
	public:
		Harl();
		~Harl();
		void	complain(str level);
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
		t_action action[4];
};

#endif