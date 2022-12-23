/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 03:55:15 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/23 02:48:11 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "debugPrint.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("Diamond_clap_name"), m_name("Diamond")
{
	debugPrint("DiamondTrap default constructor called", BLU);
	m_hitPoints = FragTrap::m_hitPoints;
	m_energyPoints = ScavTrap::m_energyPoints;
	m_attackDamage = FragTrap::m_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), m_name(name)
{
	debugPrint("DiamondTrap constructor called", BLU);
	m_hitPoints = FragTrap::m_hitPoints;
	m_energyPoints = ScavTrap::m_energyPoints;
	m_attackDamage = FragTrap::m_attackDamage;
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
	m_hitPoints = rhs.m_hitPoints;
	m_energyPoints = rhs.m_energyPoints;
	m_attackDamage = rhs.m_attackDamage;
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
	std::cout << "hp: " << m_hitPoints << "\n";
	std::cout << "energy: " << m_energyPoints << "\n";
	std::cout << "attack: " << m_attackDamage << "\n";
	std::cout << "------------------------------------------" << std::endl;
}
