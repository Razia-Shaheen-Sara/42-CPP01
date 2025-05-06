/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/05 15:42:14 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/06 13:42:13 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *group = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		group[i].setName(name);
		group[i].announce();
	}
	return (group);
}
