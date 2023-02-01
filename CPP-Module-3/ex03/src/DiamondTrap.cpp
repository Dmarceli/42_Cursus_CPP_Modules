#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "default";
	ClapTrap::_name = "default_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackPoints = FragTrap::_attackPoints;
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(str name): ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackPoints = FragTrap::_attackPoints;
	std::cout << "DiamondTrap: constructor for the name " << this->_name << " called" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const & src )
{
	this->_name = src._name;
	return *this;
}
void	DiamondTrap::attack(const std::string &target){ScavTrap::attack(target);}

void  DiamondTrap::whoAmI(void)
{
	std::cout << "My name in DiamondTrap is "<< this->_name 
				<< " and my name in clap trap is " << ClapTrap::_name << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " <<  this->_name << " Destructor called" << std::endl;
}