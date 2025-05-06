/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/05 15:40:43 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/06 14:03:14 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

int main()
{
	Zombie *zombieArmy = NULL;
	int N = 3;
	zombieArmy = zombieHorde(N, "Z");
	delete[] zombieArmy;
	return 0;
}
