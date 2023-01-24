#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "../incs/Weapon.hpp"

class HumanA
{
    private:
        Weapon  *_weapon;
        str     _name;
    public:
        HumanA(str name, Weapon &weapon);
        ~HumanA();
        void attack();
};

#endif