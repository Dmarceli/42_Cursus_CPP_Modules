#include "../incs/HumanA.hpp"

HumanA::HumanA (str humanName, Weapon &arma)
{
    name = humanName;
    weapon = &arma;
}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << " " << std::endl;
}