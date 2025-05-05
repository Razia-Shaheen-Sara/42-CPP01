/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/28 16:22:04 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/05 15:21:50 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
	Zombie*	heap_zombie;

	randomChump("STACK");
	heap_zombie = newZombie("HEAP");
	heap_zombie->announce();
	delete (heap_zombie);
}

//STACK:
//Memory for local variables.- Automatically cleaned up when function ends.

//HEAP:
//Memory for dynamically created objects (using new).MUST delete it.
//Useful if the object needs to live after the function ends.