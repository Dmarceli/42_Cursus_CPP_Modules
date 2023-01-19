#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
#include <iostream>

typedef std::string	str;

class Contact
{
	public:
		void 	AddFirstName(str FirstName);
		void	AddLastName(str lastname);
		void	AddNickname(str lastname);
		void	AddPhoneNumber(str lastname);
		void	AddSecret(str lastname);
	private:
		str		FirstName;
		str		LastName;
		str		Nickname;
		str		PhoneNumber;
		str		Secret;
};


#endif