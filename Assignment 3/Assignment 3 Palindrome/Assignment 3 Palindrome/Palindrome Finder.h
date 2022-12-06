//Xing Ji - CS303 Assignment 3
#ifndef PALINDROME_FINDER_H_
#define PALINDROME_FINDER_H_

#include <string>

/**Class with functions to check whether a string is a palindrome. */
class Palindrome_Finder {

public:
	//Construtor
	Palindrome_Finder(){}

	/**A recursive function that check a str is a palindrome or not
	@param str the input string
	@param s the index of the front letter to compare
	@param e the index of the rear letter to compare*/
	bool isPalRec(std::string str, int s, int e);

	/**Function to determine wheter input string is a palidrome. 
	@param str the input string*/
	bool is_palindrome(std::string str);

};


#endif
