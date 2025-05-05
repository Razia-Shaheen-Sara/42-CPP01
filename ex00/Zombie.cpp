/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/28 16:23:46 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/05 14:23:43 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream> //for std::cout

//WHAT IS A CONSTRUCTOR:
//A constructor is a special type of function. It's called when an object of that class is created
//primary role: initialize the object. 
//Example, Zombie::Zombie(std::string given_name) is the constructor for the "Zombie" class, 
//The constructor can have an empty body like this {} if all work is done in the initialization list

//LINE "Zombie::Zombie(std::string given_name)" EXPLAINED:
//Zombie before :: is the class name. 
//Zombie after :: is the constructor. In C++, the constructor is always named the same as the class.
//std::string name: name here is the parameter passed into the constructor when creating a Zombie object. 
//It is just a placeholder that represents the value provided  when constructing the object, e.g., "Foo".
//This name is NOT the member variable of the Zombie class.

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
