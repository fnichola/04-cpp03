/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/08 09:09:15 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "debugPrint.hpp"

int main()
{
	{
	ScavTrap b("Jim");
	b.attack("Tom");
	b.takeDamage(2);
	b.beRepaired(2);
	b.takeDamage(10);
	b.takeDamage(1);
	b.beRepaired(UINT_MAX);
	b.beRepaired(1);
	b.takeDamage(UINT_MAX);
	b.takeDamage(42);
	b.guardGate();
	}

	debugPrint("------------------------------------------");

	ClapTrap *c = new ScavTrap("John");

	c->attack("Bob");
	delete c;

	return 0;
}
