#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {

	private:
	    FragTrap();

	public:
	    FragTrap(std::string name);
	    FragTrap(const FragTrap &object);
	    FragTrap &operator=(FragTrap const &object);
	    ~FragTrap();

		void highFivesGuys(void);
		void setDefaultVal();
};

#endif
