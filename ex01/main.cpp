/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/01 05:38:30 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
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

	return 0;
}
