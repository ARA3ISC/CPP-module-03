/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 02:02:46 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/23 14:39:47 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& _name)
	: ClapTrap(_name + "_clap_name"), ScavTrap(_name)
{
	this->name = _name;
	FragTrap	obj(_name);
	this->hitPoints = obj.getHitPoints();
	this->attackDamage = obj.getAttackDamage();

	std::cout << "DiamondTrap constructor called" << std::endl;

}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->name << ", and my grandparent name is " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
