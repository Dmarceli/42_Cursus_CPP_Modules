#ifndef BASE_HPP
# define BASE_HPP
#include <cstdlib>
#include <fstream>
#include <iostream>
# include <stdexcept>
class Base
{
	public:
		virtual ~Base(){};
	class UnidentifiedObject : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};	
};

Base* generate(void);

void identify(Base* p);

void identify(Base& p);


#endif