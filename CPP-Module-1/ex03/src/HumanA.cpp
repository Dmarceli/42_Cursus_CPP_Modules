#include "../incs/HumanA.hpp"

HumanA::HumanA (str humanName, Weapon &arma)
{
    _name = humanName;
    _weapon = &arma;
}

HumanA::~HumanA(){}

void HumanA::attack(){
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}