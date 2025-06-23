#include "FragTrap.hpp"


void FragTrap::setDefaultVal()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap()
{
	std::cout << "FRAGTRAP Default constructor called\n";
	this->setDefaultVal();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FRAGTRAP Constructor params called\n";
	this->setDefaultVal();
}

FragTrap::FragTrap(const FragTrap &object) : ClapTrap(object)
{
	std::cout << "FRAGTRAP Constructor copy called \n";
	*this = object;
}

FragTrap &FragTrap::operator=(FragTrap const &object)
{
	ClapTrap::operator=(object);
	return *this;
}


FragTrap::~FragTrap()
{
	std::cout << "FRAGTRAP Destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey! Give me a high five!\n";
}