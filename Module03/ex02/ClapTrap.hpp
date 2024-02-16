#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int			hit_points;
		int			energy_points;
		int			atack_damage;
	public:
	//Constructor
		ClapTrap();
		ClapTrap(std::string name);
	//Destructor
		~ClapTrap();
	//Copy Constructer
		ClapTrap(const ClapTrap &copy);
	//Operator overloading =
		ClapTrap &operator=(const ClapTrap &other);
	//Getter Methods
		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAtackDamage() const;
	//Setter Methods
		void setName(std::string name); 
		void setHitPoints(int hp);
		void setEnergyPoints(int energy);
		void setAtackDamage(int damage);
	//Member Function
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif