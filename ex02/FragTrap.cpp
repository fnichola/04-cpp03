/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 03:55:15 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/05 01:17:12 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	m_hitPoints = 100;
	m_energyPoints = 100;
	m_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src)
	: ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
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
