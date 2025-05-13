/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/06 16:31:10 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/13 15:07:09 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(){};

const	std::string& Weapon::getType()
{
	return(this->type);
}

void	Weapon::setType(const std::string& newType)
{
	this->type = newType;
}