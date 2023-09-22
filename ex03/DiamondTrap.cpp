/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 02:02:46 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/22 17:01:59 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& _name)
	: ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
	this->name = _name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = FragTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;

	std::cout << "DiamondTrap constructor called" << std::endl;

}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
