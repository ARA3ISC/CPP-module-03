#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(const std::string& _name);
		ScavTrap(const ScavTrap& old);
		ScavTrap& operator=(const ScavTrap& old);
		void attack(const std::string& target);
		~ScavTrap();

		void guardGate();
};

#endif
