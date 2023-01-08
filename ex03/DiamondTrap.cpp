/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 03:55:15 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/08 05:24:04 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "debugPrint.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("Diamond_clap_name"), m_name("Diamond")
{
	debugPrint("DiamondTrap default constructor called", BLU);
	ClapTrap::m_hitPoints = FragTrap::m_hitPoints;
	ClapTrap::m_energyPoints = ScavTrap::m_energyPoints;
	ClapTrap::m_attackDamage = FragTrap::m_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), m_name(name)
{
	debugPrint("DiamondTrap constructor called", BLU);
	ClapTrap::m_hitPoints = FragTrap::m_hitPoints;
	ClapTrap::m_energyPoints = ScavTrap::m_energyPoints;
	ClapTrap::m_attackDamage = FragTrap::m_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
	: ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	debugPrint("DiamondTrap copy constructor called", BLU);
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	debugPrint("DiamondTrap destructor called", BLU);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	debugPrint("DiamondTrap copy assignment operator called", BLU);
	m_name = rhs.m_name;
	ClapTrap::m_hitPoints = rhs.ClapTrap::m_hitPoints;
	ClapTrap::m_energyPoints = rhs.ClapTrap::m_energyPoints;
	ClapTrap::m_attackDamage = rhs.ClapTrap::m_attackDamage;
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	return ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " + m_name + ", son of " + ClapTrap::m_name << std::endl;
}

void DiamondTrap::printStats()
{
	std::cout << "------------------------------------------\n";
	std::cout << "name: " << m_name << "\n";
	std::cout << "hp: " << ClapTrap::m_hitPoints << "\n";
	std::cout << "energy: " << ClapTrap::m_energyPoints << "\n";
	std::cout << "attack: " << ClapTrap::m_attackDamage << "\n";
	std::cout << "------------------------------------------" << std::endl;
}
