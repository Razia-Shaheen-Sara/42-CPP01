/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/13 15:28:08 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/16 12:32:50 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //for std::cout
#include <string> //for empty and length
#include <cctype> //for isspace
#include <fstream> //for ifstream
#include "Replace.hpp"

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
	if (s1.empty() || s2.empty()) //empty does not check whitespace
	{
		std::cerr << "Error: strings cannot be empty" << std::endl;
		return (1);
	}
	if (is_only_whitespace(s1))
	{
		std::cerr << "Error: s1 cannot be whitespace" << std::endl;
		return (1);
	}
	std::ifstream inputFile(filename);
	if (!inputFile.is_open()) //is_open() from fstream - checks for existance and openable
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
	std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open()) 
	{
        std::cerr << "Error: Could not create output file!" << std::endl;
        return (1);
	}
	replace_in_file(inputFile, outputFile, s1, s2);
	inputFile.close();//close from fstream
	outputFile.close();//close from ofstream

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


//Why use ifstream instead of fstream?
// std::ifstream = input file stream (read from file)
// std::ofstream = output file stream (write to file)
// std::fstream = file stream for both reading and writing
// C++ needs exact type for non-const references: so fstream cannot be passed to replace_in_file

