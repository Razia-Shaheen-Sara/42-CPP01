/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/06 16:31:44 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/13 15:03:38 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream> //for cout

//why weapon is with the function line?
//weapon for HumanA is a reference. This is the only valid way to initialize a reference in a constructor.

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA:: ~HumanA(){};

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}