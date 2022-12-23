/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:56:57 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/23 02:43:37 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include "debugPrint.hpp"
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: m_name("Clappy"), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
	debugPrint("ClapTrap default constructor called", BLU);
}

ClapTrap::ClapTrap(const std::string& name)
: m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
	debugPrint("ClapTrap constructor called", BLU);
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	debugPrint("ClapTrap copy constructor called", BLU);
	*this = src;
}

ClapTrap::~ClapTrap()
{
	debugPrint("ClapTrap destructor called", BLU);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	debugPrint("ClapTrap copy assignment operator called", BLU);
	m_name = rhs.m_name;
	m_hitPoints = rhs.m_hitPoints;
	m_energyPoints = rhs.m_energyPoints;
	m_attackDamage = rhs.m_attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if ((m_energyPoints > 0) && (m_hitPoints > 0))
	{
		--m_energyPoints;
		std::cout << "ClapTrap " << m_name << " attacks " << target <<
			", causing " << m_attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap can't do anything" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((m_hitPoints > 0))
	{
		const unsigned int damage = (amount > m_hitPoints) ? m_hitPoints : amount;
		m_hitPoints -= damage;
		std::cout << m_name << " took " << damage <<
			" points of damage! Current HP: " << m_hitPoints << std::endl;
	}
	else
	{
		std::cout << m_name << " is already KO'd" << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	const unsigned int oldHP = m_hitPoints;
	if (((unsigned long long)m_hitPoints + (unsigned long long)amount) > UINT_MAX)
		m_hitPoints = UINT_MAX;
	else
		m_hitPoints += amount;
	std::cout << m_name << " regained " << m_hitPoints - oldHP <<
		" HP! Current HP: " << m_hitPoints << std::endl;
}

void ClapTrap::printStats()
{
	std::cout << "------------------------------------------\n";
	std::cout << "name: " << m_name << "\n";
	std::cout << "hp: " << m_hitPoints << "\n";
	std::cout << "energy: " << m_energyPoints << "\n";
	std::cout << "attack: " << m_attackDamage << "\n";
	std::cout << "------------------------------------------" << std::endl;
}
