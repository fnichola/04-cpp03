/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:51:58 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/01 03:13:47 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
public:
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string m_name;
	unsigned int m_hitPoints;
	unsigned int m_energyPoints;
	unsigned int m_attackDamage;
};

#endif
