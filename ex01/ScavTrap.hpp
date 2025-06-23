#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {

	private:
	    ScavTrap();

	public:
	    ScavTrap(std::string name);
	    ScavTrap(const ScavTrap &object);
	    ScavTrap &operator=(ScavTrap const &object);
	    ~ScavTrap();

		void ScavTrap::setDefaultVal();
	    void attack(const std::string &target);
	    void guardGate();
};

#endif
