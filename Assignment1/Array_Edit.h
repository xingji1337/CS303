#ifndef ARRAY_ EDIT_H_
#define ARRAY_EDIT_H_
#include <iostream>
#include <string>

/** Specification file for the array edit*/
class Array_Edit {

public:
	/**Construct an Array_Edit instance*/
	Array_Edit();

	/**Contruct an Array_Edit instance
		@param newCapacity it will istantiate a new class with an array with the capacity set at whatever user chooses*/
	Array_Edit (int newCapacity);

	/**Load the data file containing the integers
		@param source_name The name of the file with the integers*/
	void load_data(const std::string& source_name);

	/**Check if a certain integer exists in the array
		@param integer the integer that one is looking for
		@return The index in the array that the integer is located*/
	int lookup_integer(const int& integer) const;

	/**Modify the value of an integer and will show the user the new value and old value at the index
		@param index the index at which the integer to be changed is at in the array
		@param newInteger the new value of the integer*/
	void set_integer(int index, int newInteger);

	/**Adds a new integer to the end of the array
		@param newInteger the integer that will be added to the end of the array*/
	void add_integer(int newInteger);

	/**Intakes an index of an array and remove the integer corresponding to that index
		@param index the index of the integer to be removed from the array*/
	void remove_integer(int index);



private:
	
	/**The number of integers in the array*/
	int size;

	/**The current capacity of the array.*/
	int capacity;

	/**The name of the data file that contains the integers*/
	std::string source_name;
	
	/**The array containing the integers*/
	int arr [];
};


#endif

