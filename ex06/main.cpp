/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/13 15:34:39 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/16 15:09:41 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: input a complain: DEBUG/INFO/WARNING/ERROR" << std::endl;
		return (1); 
	}
	Harl client;
    const std::string level = argv[1];
    
    // Map log levels to their respective priorities
    const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int selected_level = 4; // Default to "UNKNOWN"

    // Find the matching log level
    for (int i = 0; i < 4; ++i) 
	{
        if (level == levels[i]) 
		{
            selected_level = i;
            break;
        }
    }

    // Execute Harl's complaints from selected level onward
    switch (selected_level) 
	{
        case 0: client.complain("DEBUG");
				break ;
        case 1: client.complain("INFO");
				break ;    
        case 2: client.complain("WARNING");
				break ;
        case 3: client.complain("ERROR");
                break;
        default:
                client.complain("UNKNOWN");
    }
}