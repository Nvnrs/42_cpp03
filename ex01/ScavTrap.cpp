#include "ScavTrap.hpp"


void ScavTrap::setDefaultVal()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap()
{
	std::cout << "SCAVTRAP Default constructor called\n";
	this->setDefaultVal();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "SCAVTRAP Constructor params called\n";
	this->setDefaultVal();
}

ScavTrap::ScavTrap(const ScavTrap &object) : ClapTrap(object)
{
	std::cout << "SCAVTRAP Constructor copy called \n";
	*this = object;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &object)
{
	ClapTrap::operator=(object);
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->checkIsDead() || !this->checkHaveEnergy())
		return;
	std::cout << "SCAVTRAP "
		<< this->name
		<< " attacks "
		<< target
		<< " causing, "
		<< this->attackDamage
		<< " points of damage !"
		<< std::endl;
	this->energyPoints--;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAVTRAP Destructor called\n";
}

void ScavTrap::guardGate()
{
	if (checkIsDead())
		return;
	std::cout << "ScavTrap "
		<< this->name
		<< " is now in Gate keeper mode\n";
}
