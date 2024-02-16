#include "FragTrap.hpp"

//Constructor
FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called!" << std::endl;
    this->name = "DefaultName";
	this->hit_points = 100;
    this->energy_points = 100;
    this->atack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called!" << std::endl;
	this->name = name;
	this->hit_points = 100;
    this->energy_points = 100;
    this->atack_damage = 30;
}

//Copy constructor
FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "FragTrap Copy Constructor Called!" << std::endl;
    *this = copy;
}

//Destructor
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called!" << std::endl;
}

//Operator Overloading=
FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    this->name = copy.getName();
    this->hit_points = copy.getHitPoints();
    this->energy_points = copy.getEnergyPoints();
    this->atack_damage = copy.getAtackDamage();
    return(*this);
}

//Member Functions
void	FragTrap::highFivesGuys(void)
{
	if (this->hit_points <= 0)
	{
		std::cout << "Cannot high five because: FragTrap " << this->name << " is dead." << std::endl;
		return ;
	}

	if (this->energy_points <= 0)
    {
        std::cout << this->name << "'s energy point run out!!" << std::endl;
        return ;
    }
	else
		std::cout << "FragTrap from ClapTrap " << this->name << " says: \"HIGH FIVE EVERYONE! :)\"." << std::endl;
}