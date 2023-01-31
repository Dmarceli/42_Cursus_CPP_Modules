#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(): ClapTrap("defaultDT_clap_trap")
{
	this->_name = "defaultDT";
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	*this = src;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const & src )
{
	this->_name = src._name;
	return *this;
}



DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " <<  this->_name << " Destructor called" << std::endl;
}

void whoAmI(void)
{
	
}