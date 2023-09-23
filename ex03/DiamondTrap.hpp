#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string& _name);
		DiamondTrap(const DiamondTrap& old);
		DiamondTrap& operator=(const DiamondTrap& old);
		void attack(const std::string& target);
		virtual ~DiamondTrap();

		void guardGate();
};

#endif
