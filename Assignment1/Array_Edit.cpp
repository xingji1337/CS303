/**Implenetation of ARRAY_EDIT class
Xing Ji*/
#include <iostream>
#include <string>
#include "Array_Edit.h"
#include <fstream>
#include <stdexcept>

/**Default contructor that will set the array size at 0 and capacity to 100*/
Array_Edit::Array_Edit ()
{
	size = 0;
	capacity = 100;
}

/**Contruct an Array_Edit instance
		@param newCapacity it will istantiate a new class with an array with the capacity set at whatever user chooses*/
Array_Edit::Array_Edit(int newCapacity)
{
	size = 0;
	capacity = newCapacity;
	arr[capacity];
}

/** Functions to load the data file.
	pre:   The Array_Edit object has been created and it is empty.
	       If the file exists, it consists of integers
	post:  The data from the file is loaded into the Array_Edit object
	@para source_name The name of the data file*/
void Array_Edit::load_data(const std::string& source_name)
{
	
	int num;
	int n = 0;
	//Create an input stream for this file.
	std::ifstream in(source_name);

	if (!in.is_open()) //make sure file is openned correctly
	{
		std::cerr << "Could not open the file - '"
			<< source_name << "'" << std::endl;	
	}
	else
	{
		
		while (in >> num)
		{
			arr[n] = num; //load the integer into the array
			std::cout << arr[n] << std::endl;
			n++;
		}
	}
	size = n;
	
	//close stream
	in.close();

	std::cout << "The integers are loaded." << std::endl;

}

/** Function to look if an integer is in the array
	pre:    The Array_Edit object must be created and the array must be initialized
	@param integer The integer that is being looked up.
	@return  The index at which the integer is found, it will return -1 if it is not found*/
int Array_Edit::lookup_integer(const int& integer) const
{
	for (int i = 0; i <= size; i++)
	{
		if (i == size) //will check to see if the loop has reached the end of the array
		{
			return -1;
		}
		if (arr[i] == integer) //check to see if there is a match
		{
			return i;
		}
	}
}

/**Modify the value of an integer and will show the user the new value and old value at the index
		pre:    The Array_Edit object must be created and the array must be initialized
		@param index the index at which the integer to be changed is at in the array
		@param newInteger the new value of the integer*/
void Array_Edit::set_integer(int index, int newInteger)
{
	if (index >= size && index < 0)//check if the index is valid
	{
		std::cout << "Choose a valid index" << std::endl;
	}
	try
	{
		int oldValue = arr[index];//save old value to show the user
		arr[index] = newInteger;
		std::cout << "The old value at index " << index << " was " << oldValue 
			<< " and the new value is now set as " << newInteger << "." << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cerr << "Fatal error occurred in set_integer function" << std::endl;
		std::cerr << ex.what() << std::endl;
		abort();
	}
	catch (...)
	{
		std::cerr << "Undefined exception occurred in set_integer function" << std::endl;
		abort();
	}

}

/**Adds a new integer to the end of the array
		@param newInteger the integer that will be added to the end of the array*/
void Array_Edit::add_integer(int newInteger)
{
	if (size >= capacity)//check if the index is valid
	{
		std::cout << "The array is full, please remove integers before adding more." << std::endl;
	}
	try
	{
		arr[size] = newInteger; //add integer to the end of the array
		size++; //update the size
	}
	catch (std::exception& ex)
	{
		std::cerr << "Fatal error occurred in add_integer function" << std::endl;
		std::cerr << ex.what() << std::endl;
		abort();
	}
	catch (...)
	{
		std::cerr << "Undefined exception occurred in set_integer function" << std::endl;
		abort();
	}

	std::cout << "The array after adding the new integer:" << std::endl;
	
	//output the array
	for (int i=0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}

}

/**Intakes an index of an array and remove the integer corresponding to that index
		@param index the index of the integer to be removed from the array*/
void Array_Edit::remove_integer(int index)
{
	if(index >=size)//check if the index is valid
	{
		std::cout << "Choose a valid index" << std::endl;
	}
	else
	{
		for (int i = index; i < size-1; i++)
		{
			arr[i] = arr[i + 1]; //shift all the integers behind it to replace the integers
		}
		size--;
	}

	std::cout << "The array after removing the integer at index " << index << " :" << std::endl;
	
	//output the array
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}

}