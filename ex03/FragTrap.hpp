#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string& _name);
		FragTrap(const FragTrap& old);
		FragTrap& operator=(const FragTrap& old);
		void attack(const std::string& target);
		int	getHitPoints(void) const;
		int	getAttackDamage(void) const;
		virtual ~FragTrap();


		void highFivesGuys(void);
};

#endif
