/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/13 15:28:08 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/15 17:40:40 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //for std::cout
#include <string> //for empty and length
#include <cctype> //for isspace
#include <fstream> //for ifstream

bool is_only_whitespace(const std::string& str) //const here make sure this function does not not modify the string
{
    size_t i = 0;
    while (i < str.length()) 
	{
        if (!std::isspace(str[i]))
            return (false);
        i++;
    }
    return (true);
}

int main(int argc, char **argv)
{
	
	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments!" << std::endl;
		std::cout << "Please provide filename, string1, string2" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty() || is_only_whitespace(s1) || is_only_whitespace(s2)) //empty does not check whitespace
	{
		std::cerr << "Error: strings cannot be empty" << std::endl;
		return (1);
	}
	std::fstream inputFile(filename);
	if (!inputFile.is_open()) //is_open() is member function of fstream
	{
		std::cerr << "Error: Could not open the file!" << std::endl;
		return (1);
	}
	inputFile.seekg(0, std::ios::end);  // move to end
	if (inputFile.tellg() == 0)  //returns the current position of get/read pointer
	{
	    std::cerr << "Error: file is empty!" << std::endl;
	    return 1;
	}
	inputFile.seekg(0);  // reset to beginning
	
}

//What is std::ifstream?
//std::ifstream stands for input file stream.
//It’s a class in the C++ Standard Library (from the <fstream> header) used to read data from files.
//You create an ifstream object, give it a filename, and then you can read from that file just like reading from std::cin (console input).


//What is seekg() and tellg()?
//seekg() — Seek Get
//Moves the read (get) pointer in a file.
//Used to jump to a specific position for reading.
//tellg() is Tell GET- Returns the current position of the read pointer.
//Often used after seekg() to check file size or location.
//It works even if the file only contains whitespace or newlines.
//it does not need to read, so good for parsing
