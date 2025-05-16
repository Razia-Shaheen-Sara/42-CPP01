/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/13 15:34:39 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/16 14:50:33 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl client;

	client.complain("DEBUG");
	client.complain("INFO");
	client.complain("WARNING");
	client.complain("ERROR");
	//client.complain("Something");
}