/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/05/06 15:06:11 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/05/06 15:53:31 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


// REFERENCE:
// refers to the same variable using a different name.(NICKNAME)
// No copy is made. Both refer to the same memory.
// A reference must be initialized when it’s created.
//Once set, it can’t be changed to refer to a different variable.

//Why all outputs are same?
//&A → memory address of A
//stringPTR → points to A, so it holds &A
//&stringREF → a reference is just another name for A, so &stringREF == &A

int main()
{
	std::string A = "HI THIS IS BRAIN";
	std::string* stringPTR = &A;
	std::string& stringREF = A; //string& means reference
	std::cout << "Memory address of the string variable: " << &A << std::endl;
	std::cout << "Memory address held by stringPTR     : " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF     : " << &stringREF << std::endl;
	std::cout << "Value of the string variable         : " << A << std::endl;
	std::cout << "Value pointed to by stringPTR        : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF        : " << stringREF << std::endl;

	return 0;	
}