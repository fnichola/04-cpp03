/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 02:20:48 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap d("Doug");
	d.printStats();
	d.attack("Tom");
	d.takeDamage(2);
	d.highFivesGuys();
	d.guardGate();
	d.whoAmI();

	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Copy by assignment (dd = d):\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	DiamondTrap dd = d;
	dd.printStats();
	dd.whoAmI();

	return 0;
}
