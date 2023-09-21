/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:18:53 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/21 01:38:46 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap ftrap("ashley");
	ftrap.attack("frtrap2");
	ftrap.takeDamage(99);
	ftrap.beRepaired(40);

	// ftrap.highFivesGuys();

}
