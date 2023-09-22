/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 02:02:46 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/21 19:03:16 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& _name)
	: ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
	this->name = _name;
}
