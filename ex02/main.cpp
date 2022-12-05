/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/05 01:35:58 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap c("Fred");
	c.attack("Tom");
	c.takeDamage(2);
	c.beRepaired(2);
	c.takeDamage(10);
	c.takeDamage(1);
	c.beRepaired(UINT_MAX);
	c.beRepaired(1);
	c.takeDamage(UINT_MAX);
	c.takeDamage(42);
	c.highFivesGuys();

	return 0;
}
