/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/06 16:30:48 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/06 17:14:23 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon
{	
	private:
		std::string type;

	public:
		Weapon(std::string input); //constructor with input because main is asking it
		~Weapon();
		const std::string& getType(); //SUBJECT: "returns a const reference to type (string&)"
		void setType(const std::string&); //SUBJECT: "sets type using the new value passed as a parameter."
};

#endif