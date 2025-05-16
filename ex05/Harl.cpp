/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/13 15:34:49 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/16 14:44:06 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{}
Harl::~Harl()
{}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I ve been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; //array of levels
	void (Harl::*class_ptr[4]) (void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int flag = 5;
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			flag = i;
			break;
		}
	}
	if (flag == 5)
		std ::cout << "UNKNOWN LEVEL!" << std::endl;
	else
		(this->*class_ptr[flag])();//use the corresponding function pointer:
}

//class_ptr is an array of pointers to member functions of the Harl class.
//Each element points to a member function of Harl that takes no parameters and returns void.