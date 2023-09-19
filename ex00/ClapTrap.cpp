/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:07:23 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/19 21:21:43 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string& _name)
{
	this->name = _name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;

	std::cout << "ClapTrap constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target
			<< "," << " causing " << this->attackDamage << " points of damage" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't has enough energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((amount - this->hitPoints) <= 0)
	{
		std::cout << "ClapTrap " << this->name << " was attacked and died 💀" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " was attacked" << std::endl;
		this->hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " repared itself " << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't has enough energy points" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}
