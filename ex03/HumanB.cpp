/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/06 16:32:30 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/13 15:10:12 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream> //for cout

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = nullptr;
}
HumanB::~HumanB(){};

void HumanB::setWeapon(Weapon& w) 
{
	weapon = &w;  // store the address of an existing Weapon
}

void HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " does not have a weapon" << std::endl;
}
