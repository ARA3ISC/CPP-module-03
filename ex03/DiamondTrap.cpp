/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 02:02:46 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/22 22:11:26 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& _name)
	: ClapTrap(_name + "_clap_name"), FragTrap(_name), ScavTrap(_name)
{
	// (void)_name;
	// this->_name = _name;
	// this->hitPoints = FragTrap::hitPoints;
	// this->energyPoints = ScavTrap::energyPoints;
	// this->attackDamage = FragTrap::attackDamage;

	// std::cout << "DiamondTrap constructor called" << std::endl;
	std::cout << "name : " << this->name << std::endl;

}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
