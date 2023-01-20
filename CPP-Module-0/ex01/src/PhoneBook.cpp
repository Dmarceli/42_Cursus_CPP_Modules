#include "PhoneBook.hpp"

void	PhoneBook::show_instruction(void)
{
	system("clear");
	std::cout << "Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
	std::cout << "\033[1;31many other input will be discarded\033[0m" << std::endl;
}

PhoneBook::PhoneBook(void)
{
	this->_i = -1;
	this->index = -1;
}

void PhoneBook::AddContact(void)
{
	str input;

	if (_i < 7)
		_i++;
	index++;
	index %= 8;
	std::cout << " \e[1;35mEnter The First Name -> \033[0m";
	std::getline(std::cin, input);
	this->contacts[index].AddFirstName(input);

	std::cout << " \e[1;35mEnter The Last Name -> \033[0m";
	std::getline(std::cin, input);
	this->contacts[index].AddLastName(input);
	

	std::cout << " \e[1;35mEnter Nickname -> \033[0m";
	std::getline(std::cin, input);
	this->contacts[index].AddNickname(input);

	std::cout << " \e[1;35mEnter Phone # -> \033[0m";
	std::getline(std::cin, input);
	this->contacts[index].AddPhoneNumber(input);

	std::cout << " \e[1;35mEnter Deepest darkest secret-> \033[0m";
	std::getline(std::cin, input);
	this->contacts[index].AddSecret(input);
	return ;

}

void PhoneBook::SearchContact(void)
{
	system("clear");
	if (_i  == -1)
	{
		std::cout << "No contacts yet, add some by runnnig \"ADD\"" << std::endl;
		return ;
	}
	std::cout << "\n\n                 \e[1;35mContacts\e[0;0m           " << std::endl;
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	std::cout << "|   Index    |    Name    |  Surname   |  Nickname  |" << std::endl;
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	for (int i = -1; i < _i; i++){
		PhoneBook::contacts[i + 1].display(i + 1);
	}
}
