//Xing Ji- CS303 Assignment 3
#include "State_Data_Map.h"
#include <iostream>
#include <map>
#include <string>
#include <set>
#include <iterator>

//Insert Function
void State_Data_Map::insert(std::pair<std::string, std::string> a_set)
{
	stateMap.std::map<std::string, std::string>::insert(a_set);
}

/** Outputs data stored in stateDataMap*/
void State_Data_Map:: outputStateDataMap() 
{
	for (std::map<std::string, std::string>::iterator itr = stateMap.std::map<std::string, std::string>::begin(); 
	itr != stateMap.std::map<std::string, std::string>::end(); itr++)
	{
		std::cout << "State: " << itr->first << ", Capital: " << itr->second << std::endl;
	}
}

/**Change paired value*/
void State_Data_Map::changeCapital(std::map<std::string, std::string> stateMap, std::string state, std::string newCapital)
{
	std::map<std::string, std::string>::iterator itr;
	itr = stateMap.std::map<std::string, std::string>::find(state);

	if (itr != stateMap.std::map<std::string, std::string>::end())
	{
		itr->second = newCapital;
	}
}

/**Outputs the capitalName paired with the stateName*/
void State_Data_Map::outputCapital(std::map<std::string, std::string> stateMap, std::string state)
{
    std::map<std::string, std::string>::iterator it = stateMap.std::map<std::string, std::string>::find(state);
    if (it == stateMap.std::map<std::string, std::string>::end())
    {
        std::cout << state << " is not found" << std::endl;
    }
    else 
    {
        std::cout << "Capital of " << state << " is " << it->second << std::endl;
    }
}
