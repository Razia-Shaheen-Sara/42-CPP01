/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/28 16:24:14 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/05 15:31:57 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//randomChump's zombie is used inside the function, "RETURNS NOTHING", so I put it on stack 
//it can clean itself, no need to delete

//Zombie local(name);EXPLANATION:
//Zombie means both Class and constructor here
//It declares the type (Zombie class)
//And it calls the constructor of that class
//In C++, constructor is named same as class. So writing Zombie here does both at once:
//Zombie = class name
//(name) = triggers the constructor


void randomChump(std::string name)
{
	Zombie local(name);
	local.announce();
}

