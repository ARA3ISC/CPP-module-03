/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:15:17 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/21 00:59:58 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& _name):ClapTrap(_name)
{
	this->name = _name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	std::cout << "FragTrap constructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target
			<< "," << " causing " << this->attackDamage << " points of damage" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "FragTrap " << this->name << " doesn't has enough energy points" << std::endl;
}

void FragTrap::highFivesGuys( void )
{

}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
