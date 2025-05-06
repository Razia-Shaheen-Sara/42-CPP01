/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/05 15:41:38 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/06 14:08:15 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() //default constructor
{}

Zombie::~Zombie() //destructor is written here
{
    std::cout << name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string name) 
{
	this->name = name;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
