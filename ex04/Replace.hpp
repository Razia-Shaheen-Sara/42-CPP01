/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/15 16:13:28 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/16 13:33:14 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <fstream> //for ifstream-- Class for input file stream


void replace_in_file(std::ifstream& inputFile, std::ofstream& outputFile, const std::string& s1, const std::string& s2);

#endif