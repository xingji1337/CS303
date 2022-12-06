//Xing Ji- CS303 Assignment 3

#include "Palindrome Finder.h"
#include <iostream>
#include <string>

int main()
{
	std::string str;
	
	std::cout << "Input a word (all lowercase): ";
	std::cin >> str;

	Palindrome_Finder pf = Palindrome_Finder();

	if (pf.is_palindrome(str))
	{
		std::cout << "This word is a palindrome." << std::endl;
	}
	else
	{
		std::cout << "This word is not a palindrome." << std::endl;
	}
	
	return 0;
}