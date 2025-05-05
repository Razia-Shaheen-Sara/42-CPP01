/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/28 16:22:21 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/05 14:25:28 by rshaheen      ########   odam.nl         */
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

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif