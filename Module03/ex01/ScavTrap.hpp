#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	//Constructor
		ScavTrap();
		ScavTrap(std::string name);
	//Copy Constructor
		ScavTrap(ScavTrap const &original);
	//Operator overloading=
		ScavTrap &operator=(ScavTrap const &copy);
	//Destructor
		~ScavTrap();
	//Member functions
		void attack(const std::string &target);	
		void	guardGate();
};

#endif