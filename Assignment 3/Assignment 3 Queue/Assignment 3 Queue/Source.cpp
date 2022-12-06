//Xing Ji - CS303 Assignment 3

#include "Queue.h"
#include <list>
#include <iostream>
#include <string>

int main()
{
	KW::queue<std::string> customers;
	std::string name;
	int choice_num = 0;
	std::string choice[] = {
		"push", "front", "pop", "size", "move to rear", "quit" };
	const int NUM_CHOICES = 6;

	while (choice_num < NUM_CHOICES - 1)
	{
		std::cout << "Select an operation on customer queue" << std::endl;
		for (int i = 0; i < NUM_CHOICES; i++)
		{
			std::cout << i << ":" << choice[i] << std::endl;
		}

		std::cin >> choice_num;
		switch (choice_num)
		{
		case 0:
			std::cout << "Enter new customer name" << std::endl;
			std::cin >> name;
			customers.push(name);
			break;
		case 1:
			std::cout << "Customer " << customers.front() << " is next in line" << std::endl;
			break;
		case 2:
			std::cout << "Customer " << customers.front() << " removed from line" << std::endl;
			customers.pop();
			break;
		case 3:
			std::cout << "Size of line is " << customers.size() << std::endl;
			break;
		case 4:
			std::cout << "Customer " << customers.front() << " is moved to the rear of the line" << std::endl;
			customers.move_to_rear();
			break;
		case 5:
			std::cout << "Leaving customer queue." << std::endl
				<< "Number of customers in queue is " << customers.size()
				<< std::endl;
			break;
		default:
			std::cout << "Invalid selection" << std::endl;
			break;
		}//end switch
	}//end while


	return 0;
};