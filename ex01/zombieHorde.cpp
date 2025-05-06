/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/05 15:42:14 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/06 15:12:59 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *army = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		army[i].setName(name);
		army[i].announce();
	}
	return (army);
}
