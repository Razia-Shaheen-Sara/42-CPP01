/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/13 15:34:59 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/16 14:00:15 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>

class	Harl
{
	private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

	public:

	Harl();
	~Harl();
	void complain( std::string level);
	
};

#endif
