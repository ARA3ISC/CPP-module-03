#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(const std::string& _name);
		FragTrap(const FragTrap& old);
		FragTrap& operator=(const FragTrap& old);
		void attack(const std::string& target);
		~FragTrap();

		void highFivesGuys(void);
};

#endif
