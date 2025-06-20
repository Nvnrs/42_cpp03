#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

	private :
		ScavTrap()
		{
			std::cout << "SCAVTRAP Default constructor called\n";
		}

	public :

		ScavTrap(std::string name) : ClapTrap(name)
		{
			std::cout << "SCAVTRAP Constructor params called\n";
		};

		ScavTrap(const ScavTrap &object)
		{
			std::cout << "SCAVTRAP Constructor copy called \n";
			*this = object;
		};

		ScavTrap &operator=(ScavTrap const &object)
		{
			ClapTrap::operator=(object);
			return *this;
		};

		void attack(const std::string &target)
		{
			if (this->checkIsDead() || this->checkHaveEnergy())
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

		~ScavTrap()
		{
			std::cout << "SCAVTRAP Destructor params called\n";
		}

		void guardGate()
		{
			if (checkIsDead())
				return;
			std::cout << "ScavTrap "
				<< this->name
				<< " is now in Gate keeper mode\n";

		}
};

#endif