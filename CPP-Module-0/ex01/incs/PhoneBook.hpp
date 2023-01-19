#include <Contact.hpp>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <sstream>

typedef std::string	str;

class PhoneBook{
	private:
		int 	_i;
		Contact	contacts[8];
	public:
		void	show_instruction(void);
		void	AddContact(void);
		void	SearchContact(void);
};

#endif