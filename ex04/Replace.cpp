/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/15 16:12:52 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/16 13:28:08 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

//process line by line

void replace_in_file(std::ifstream& inputFile, std::ofstream& outputFile, const std::string& s1, const std::string& s2) 
{
    std::string line;
    while (std::getline(inputFile, line))// Read one line at a time from the input file
	{
        std::string newLine; // Will store the processed version of the current line
        size_t postion = 0; //index to be used by .find to keep track

        while (true) 
		{
            size_t found = line.find(s1, postion); //found is the index of the s1's occurance
            if (found == std::string::npos) //if not found
			{
                newLine += line.substr(postion); //substr(pos) returns everything from pos to the end and += appends it to existing newline
                break;
            }
            newLine += line.substr(postion, found - postion); //append from position until before the s1
            newLine += s2;//append s2 to the "newLine"
            postion = found + s1.length(); // Move 'postion' past the matched s1 to continue searching in "line"
        }
        outputFile << newLine << '\n'; //write the newLine to the output file
    }
}

//getline::
//Reads ONE line from the file at a time (excluding the newline character).
//Stores it in line.
//Returns false when the end of the file is reached

//find::
// Searches for the first occurrence of s1 starting from given postion.
// Returns the index of that occurrence.
// If not found, returns std::string::npos (a constant that means “not found”).

//substr::
//std::string substr (size_t pos, size_t len) pos == beginning pos of substr; len == how many chars to take after beginning
//can be used with only position

