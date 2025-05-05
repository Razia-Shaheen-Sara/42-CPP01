/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/28 16:23:38 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/05 14:59:16 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//it returns a pointer to what it created so it will exist outside function
//I put it on heap, I have to delete after it

//new/delete = C++ keywords, not part of any standard library header.

Zombie* newZombie(std::string name)
{
	Zombie *newZombie;
	newZombie = new Zombie(name); //Zombie is the class "Zombie"
	return (newZombie);
}