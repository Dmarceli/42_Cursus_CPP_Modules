#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackPoints = 30;
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(str name) : ClapTrap( name ) {

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackPoints = 30;
	this->_maxHealth = 100;
	std::cout << "FragTrap: constructor for the name " << this->_name << " called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ): ClapTrap(src)
{
	std::cout << "FragTrap: Copy Assignment operator called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: " <<  this->getName() << " Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{	
	ClapTrap::operator=(src);
	std::cout << "FragTrap: Copy Assignment operator called" << std::endl;
	return(*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap: " << this->_name <<" asks if anybody want an high five? 👋" << std::endl;
}