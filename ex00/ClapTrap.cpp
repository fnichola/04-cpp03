/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:56:57 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/23 01:55:02 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include "debugPrint.hpp"
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
: m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
	debugPrint("ClapTrap name constructor called", BLU);
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
		std::cout << "ClapTrap " << m_name << " took " << damage <<
			" points of damage! Current HP: " << m_hitPoints << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << m_name << " is already KO'd" << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	const unsigned int oldHP = m_hitPoints;
	if (((unsigned long long)m_hitPoints + (unsigned long long)amount) > UINT_MAX)
		m_hitPoints = UINT_MAX;
	else
		m_hitPoints += amount;
	std::cout << "ClapTrap " << m_name <<
		" regained " << m_hitPoints - oldHP <<
		" HP! Current HP: " << m_hitPoints << std::endl;
}
