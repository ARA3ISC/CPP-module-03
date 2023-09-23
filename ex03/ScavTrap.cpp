/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:19:53 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/23 14:20:03 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name): ClapTrap(_name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << "ScavTrap constructor called" << std::endl;;
}

ScavTrap::ScavTrap(const ScavTrap& old):ClapTrap(old)
{
	this->name = old.name;
	this->hitPoints = old.hitPoints;
	this->energyPoints = old.energyPoints;
	this->attackDamage = old.attackDamage;

	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& old)
{
	if (this == &old)
		return *this;
	this->name = old.name;
	this->hitPoints = old.hitPoints;
	this->energyPoints = old.energyPoints;
	this->attackDamage = old.attackDamage;

	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return *this;
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
