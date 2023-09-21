#ifndef FRAGTRAP
# define FRAGTRAP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(const std::string& _name);
		void attack(const std::string& target);
		~FragTrap();

		void highFivesGuys(void);
};

#endif
