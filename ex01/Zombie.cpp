/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/05 15:41:38 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/05 15:46:02 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string given_name)
{
	this->name = given_name; //assigning the value of the parameter given_name(foo/loo) to the  Class member variable name.
	std::cout << "Zombie " << this->name << " is created" << std::endl;
}

Zombie::~Zombie() //destructor is written here
{
    std::cout << name << " is destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
