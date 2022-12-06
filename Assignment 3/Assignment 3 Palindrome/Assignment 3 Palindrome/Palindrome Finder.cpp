//Xing Ji - CS303 Assignment 3

#include "Palindrome Finder.h"

/**A recursive function that check a str is a palindrome or not
	@param str the input string
	@param s the index of the front letter to compare
	@param e the index of the rear letter to compare*/
bool Palindrome_Finder::isPalRec(std::string str, int s, int e)
{
	//If there is only one character
	if (s == e)
	{
		return true;
	}

	//if the front and end letters don't match
	if (str[s] != str[e])
	{
		return false;
	}

	//Check if the middle substring is also palindrome
	if (s < e + 1)
	{
		return isPalRec(str, s + 1, e - 1);
	}

	return true;
}

/**Function to determine wheter input string is a palidrome.
@param str the input string*/
bool Palindrome_Finder::is_palindrome(std::string str)
{
	int n = str.length();
	if (n == 0)
	{
		return true;
	}
	
	return isPalRec(str, 0, n - 1);
}