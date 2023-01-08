/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/08 09:19:09 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include "debugPrint.hpp"

int main()
{
	DiamondTrap d("Doug");
	d.printStats();
	d.attack("Tom");
	d.takeDamage(2);
	d.highFivesGuys();
	d.guardGate();
	d.whoAmI();

	debugPrint("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	debugPrint("Copy by assignment (dd = d):");
	debugPrint("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

	DiamondTrap dd = d;
	dd.printStats();
	dd.whoAmI();

	return 0;
}
