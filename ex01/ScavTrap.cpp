/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 03:55:15 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/23 02:17:23 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "debugPrint.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
{
	debugPrint("ScavTrap constructor called", BLU);
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src)
	: ClapTrap(src)
{
	debugPrint("ScavTrap copy constructor called", BLU);
	*this = src;
}

ScavTrap::~ScavTrap()
{
	debugPrint("ScavTrap destructor called", BLU);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	debugPrint("ScavTrap copy assignment operator called", BLU);
	m_name = rhs.m_name;
	m_hitPoints = rhs.m_hitPoints;
	m_energyPoints = rhs.m_energyPoints;
	m_attackDamage = rhs.m_attackDamage;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << m_name << " is now in gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if ((m_energyPoints > 0) && (m_hitPoints > 0))
	{
		--m_energyPoints;
		std::cout << "ScavTrap " << m_name << " attacks " << target <<
			", causing " << m_attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap can't do anything" << std::endl;
	}
}
