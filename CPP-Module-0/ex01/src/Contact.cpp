#include "Contact.hpp"

void print_contact_info(std::string str)
{
	std::cout << " ";
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		int spaces = 10 - str.length();
		for (int i = 0; i < spaces; i++)
			std::cout << " ";
		std::cout << str;
	}
	std::cout << " |";
}

void	Contact::AddFirstName(str firstname)
{
	this->FirstName = firstname;
}

void	Contact::AddLastName(str lastname)
{
	this->LastName = lastname;
}
void	Contact::AddNickname(str nickname)
{
	this->Nickname = nickname;
}

void	Contact::AddPhoneNumber(str number)
{
	this->PhoneNumber = number;
}

void	Contact::AddSecret(str secret)
{
	this->Secret = secret;
}

void Contact::display(int i)
{
	std::cout << "|          " << i << " |";
	print_contact_info(this->FirstName);
	print_contact_info(this->LastName);
	print_contact_info(this->Nickname);
	std::cout << std::endl;
	std::cout << "+------------+------------+------------+------------+" << std::endl;
}