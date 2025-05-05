/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/05 15:41:05 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/05 16:11:42 by rshaheen      ########   odam.nl         */
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
		Zombie(std::string given_name); //constructor declared here
		~Zombie();                //destructor declared here
	void	announce( void ); //in public because subject doec not specify
};

Zombie* zombieHorde(int N, std::string name);

#endif