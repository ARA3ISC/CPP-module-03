/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:19:53 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/21 00:03:45 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& _name): ClapTrap(_name)
{
	this->name = _name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target
			<< "," << " causing " << this->attackDamage << " points of damage." << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ScavTrap " << this->name << " doesn't has enough energy points." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->name << " is guarding the gate." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
