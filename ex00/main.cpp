#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("bob");
	ClapTrap b(a);

	std::cout << b;
	return (0);
}