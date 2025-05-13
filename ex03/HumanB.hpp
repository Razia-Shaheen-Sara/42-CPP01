/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/06 16:32:12 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/13 14:49:37 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <string>
#include "Weapon.hpp"

class	HumanB
{
	private:
	std::string name;
	Weapon* weapon; //HumanB uses a pointer because it might or might not have a weapon. pointer can be null
	
	
	public:
		HumanB(std::string name); //pass the Weapon as a reference, otherwise it will be a copy, which breaks the "shared weapon" behavior.
		~HumanB();
		void	setWeapon(Weapon& w);
		void	attack();
};

#endif

//Weapon for humanA vs humanB
//A will always have it/so it is a reference-which is set from the beginning and cannot be changed/no setWepon/initialized with weapon
//B sometimes will have it/so it is a pointer- which will be null in the beginning/setWeapon used/not initialized with weapon
