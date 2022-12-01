/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/01 03:49:22 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Bob");

	a.attack("Tom");
	a.takeDamage(2);
	a.beRepaired(2);
	a.takeDamage(10);
	a.takeDamage(1);
	a.beRepaired(UINT_MAX);
	a.beRepaired(1);
	a.takeDamage(UINT_MAX);
	a.takeDamage(42);
	return 0;
}
