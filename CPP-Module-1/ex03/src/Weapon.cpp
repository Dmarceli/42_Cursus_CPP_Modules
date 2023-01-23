#include "../incs/Weapon.hpp"

Weapon::Weapon(){}

// Weapon::Weapon(Weapon &arma){
//     this->type = arma.type;
// }

Weapon::Weapon(str Name){
    setType(Name);
}

Weapon::~Weapon(){}

str Weapon::getType(void)
{
    return(this->type);
}

void Weapon::setType(str tipo)
{
    this->type = tipo;
}