#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "../incs/Weapon.hpp"

class HumanA
{
    private:
        Weapon  *weapon;
        str     name;
    public:
        HumanA(str name, Weapon &weapon);
        ~HumanA();
        void attack();
};

#endif