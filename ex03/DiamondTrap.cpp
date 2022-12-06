/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 03:55:15 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/01 05:41:44 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), m_name(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	m_hitPoints = FragTrap::m_hitPoints;
	m_energyPoints = ScavTrap::m_energyPoints;
	m_attackDamage = FragTrap::m_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
	: ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
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
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "name: " << m_name << std::endl;
	std::cout << "hp: " << m_hitPoints << std::endl;
	std::cout << "energy: " << m_energyPoints << std::endl;
	std::cout << "attack: " << m_attackDamage << std::endl;
	std::cout << "------------------------------------------" << std::endl;
}
