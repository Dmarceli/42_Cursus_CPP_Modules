#include "../incs/Harl.hpp"


Harl::Harl()
{
	action[0].comment = "debug";
	action[1].comment = "info";
	action[2].comment = "warning";
	action[3].comment = "error";
	action[0].action = &Harl::debug;
	action[1].action = &Harl::info;
	action[2].action = &Harl::warning;
	action[3].action = &Harl::error;
}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! " << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now!" << std::endl;
}

void Harl::complain(std::string level)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (action[i].comment == level)
		{
			(this->*action[i].action)();
			return ;
		}	
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}