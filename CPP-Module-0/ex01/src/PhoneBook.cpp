#include "PhoneBook.hpp"

void	PhoneBook::show_instruction(void)
{
	system("clear");
	std::cout << "Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
	std::cout << "\033[1;31many other input will be discarded\033[0m" << std::endl;
}

void PhoneBook::AddContact(void)
{
	str input;
	std::cout << " \e[1;35mEnter The First Name -> \033[0m";
	std::getline(std::cin, input);
	this->contacts[_i % 8].AddFirstName(input);

	std::cout << " \e[1;35mEnter The Last Name -> \033[0m";
	std::getline(std::cin, input);
	this->contacts[_i % 8].AddLastName(input);
	

	std::cout << " \e[1;35mEnter Nickname -> \033[0m";
	std::getline(std::cin, input);
	this->contacts[_i % 8].AddNickname(input);

	std::cout << " \e[1;35mEnter Phone # -> \033[0m";
	std::getline(std::cin, input);
	this->contacts[_i % 8].AddPhoneNumber(input);

	std::cout << " \e[1;35mEnter Deepest darkest secret-> \033[0m";
	std::getline(std::cin, input);
	this->contacts[_i % 8].AddSecret(input);
	_i++;
	return ;
}

void PhoneBook::SearchContact(void)
{
	system("clear");
	if (_i  == 0)
	{
		std::cout << "No contacts yet, add some by runnnig \"ADD\"" << std::endl;
	}
	std::cout << "\n\n            \e[1;35m  My Contacts    \e[0;0m           " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  index  |first name| last name | nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	//for (int i = 0; i < _i; i++)

}