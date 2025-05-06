/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/05 15:41:05 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/06 14:05:56 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string> //for std::string

class Zombie
{
	private:
	std::string	name;
	
	public:
		
		Zombie();       // Required for new Zombie[N], cannot have parameters inside it
		~Zombie();      
	void	announce( void );
	void 	setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
