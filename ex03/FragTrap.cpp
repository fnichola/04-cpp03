/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 03:55:15 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/23 02:34:52 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "debugPrint.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap("Fraggy")
{
	debugPrint("FragTrap default constructor called", BLU);
	m_hitPoints = 100;
	m_energyPoints = 100;
	m_attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	debugPrint("FragTrap constructor called", BLU);
	m_hitPoints = 100;
	m_energyPoints = 100;
	m_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src)
	: ClapTrap(src)
{
	debugPrint("FragTrap copy constructor called", BLU);
	*this = src;
}

FragTrap::~FragTrap()
{
	debugPrint("FragTrap destructor called", BLU);
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	debugPrint("FragTrap copy assignment operator called", BLU);
	m_name = rhs.m_name;
	m_hitPoints = rhs.m_hitPoints;
	m_energyPoints = rhs.m_energyPoints;
	m_attackDamage = rhs.m_attackDamage;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "HIGH FIVES GUYS!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if ((m_energyPoints > 0) && (m_hitPoints > 0))
	{
		--m_energyPoints;
		std::cout << "FragTrap " << m_name << " attacks " << target <<
			", causing " << m_attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap can't do anything" << std::endl;
	}
}
