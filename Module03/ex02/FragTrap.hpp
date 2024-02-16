#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	//Constructor
		FragTrap();
		FragTrap(std::string name);
	//Copy Constructor
		FragTrap(FragTrap const &original);
	//Operator overloading=
		FragTrap &operator=(FragTrap const &copy);
	//Destructor
		~FragTrap();
	//Member functions
		void	highFivesGuys();
};

#endif