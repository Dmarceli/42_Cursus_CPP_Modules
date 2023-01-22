#include "PhoneBook.hpp"

void	PhoneBook::show_instruction(void)
{
	system("clear");
	std::cout << "\t\tEnter your command [ADD, SEARCH, EXIT]" << std::endl;
	std::cout << "\033\t\t[1;31m   any other input will be discarded\033[0m" << std::endl;
}

PhoneBook::PhoneBook(void)
{
	this->_i = -1;
	this->index = -1;
}

int PhoneBook::CheckInput(str input)
{
	if (input.empty() || (input.find_first_not_of(' ') == std::string::npos))
	{
    	std::cout << "Field cannot be empty.\n";
		_i--; index--;
    	return 1;
	}
	return(0);
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
	if (this->CheckInput(input))
    	return;
	this->contacts[index].AddFirstName(input);

	std::cout << " \e[1;35mEnter The Last Name -> \033[0m";
	std::getline(std::cin, input);
	if (this->CheckInput(input))
    	return;
	this->contacts[index].AddLastName(input);
	
	std::cout << " \e[1;35mEnter Nickname -> \033[0m";
	std::getline(std::cin, input);
	if (this->CheckInput(input))
    	return;
	this->contacts[index].AddNickname(input);

	std::cout << " \e[1;35mEnter Phone # -> \033[0m";
	std::getline(std::cin, input);
	if (this->CheckInput(input))
    	return;
	this->contacts[index].AddPhoneNumber(input);

	std::cout << " \e[1;35mEnter Deepest darkest secret-> \033[0m";
	std::getline(std::cin, input);
	if (this->CheckInput(input))
    	return;
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
	std::cout << "\n\t\t\t\e[1;35mContacts\e[0;0m" << std::endl;
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	std::cout << "|   Index    |    Name    |  Surname   |  Nickname  |" << std::endl;
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	for (int i = -1; i < _i; i++)
		PhoneBook::contacts[i + 1].display(i + 1);
	
	str input;
	std::cout << "\nPICK INDEX -> ";
	std::getline(std::cin, input);
	int index = atoi(&input[0]);
	system("clear");
	if (index <= 7 && index >= 0)
		this->contacts[index].DisplayDetails();
	else
		std::cout << "Out of range or invalid character!\n";
}
