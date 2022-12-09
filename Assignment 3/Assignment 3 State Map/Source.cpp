//Xing Ji- CS303 Assignment 3

#include <iostream>
#include <map>
#include <string>


int main()
{
	std::map<std::string,std::string> stateMap;

	stateMap.insert(std::make_pair("Nebraska", "Lincoln"));
	stateMap.insert(std::make_pair("New York", "Albany"));
	stateMap.insert(std::make_pair("Ohio", "Columbus"));
	stateMap.insert(std::make_pair("California", "Sacremento"));
	stateMap.insert(std::make_pair("Massachusetts", "Boston"));
	stateMap.insert(std::make_pair("Texas", "Austin"));


	for (std::map<std::string, std::string>::const_iterator itr = stateMap.begin(); itr != stateMap.end(); ++itr)
	{
		std::cout << itr->first << " " << itr->second << std::endl;
	}

	std::map<std::string, std::string>::iterator itr;
	itr = stateMap.find("California");

	if (itr != stateMap.end())
	{
		itr->second = "Los Angeles";
	}

	for (std::map<std::string, std::string>::const_iterator itr = stateMap.begin(); itr != stateMap.end(); ++itr)
	{
		std::cout << itr->first << " " << itr->second << std::endl;
	}


	return 0;
}
