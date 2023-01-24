#include <Contact.hpp>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

typedef std::string	str;

class PhoneBook{
	private:
		int		index;
		int 	_i;
		Contact	contacts[8];
	public:
		PhoneBook(void);
		void	show_instruction(void);
		void	AddContact(void);
		void	SearchContact(void);
		int		CheckInput(str input);
};

#endif