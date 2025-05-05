/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/28 16:22:21 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/05 12:43:30 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
	private:
	std::string	name;
	
	public:
		Zombie(/* args */);
		~Zombie();
	void	announce( void ); //in public because subject doec not specify
};

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}
