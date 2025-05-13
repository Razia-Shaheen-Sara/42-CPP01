/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/06 16:31:57 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/13 15:02:27 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <string>
#include "Weapon.hpp"

class	HumanA
{
	private:
	std::string name;
	Weapon& weapon; //HumanA uses a reference because it's guaranteed to always have a weapon as opposed to a pointer
	
	
	public:
		HumanA(std::string name, Weapon& weapon); //pass the Weapon as a reference, otherwise it will be a copy, which breaks the "shared weapon" behavior.
		~HumanA();
		void	attack();
};

#endif


//Why it does not have setWeapon?
//HumanA is initialized with a weapon and cannot be rearmed.
//So weapon is a reference for humanA because References in C++ cannot be changed once set.
//So being a reference, it must be initialized immediately and no point in setting it later

