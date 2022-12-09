//Xing Ji- CS303 Assignment 3

#include <iostream>
#include <string>
#include <map>


/** Outputs the data stored in the map
* @param stateDataMap The map that we need to output the data from
*/
void outputStateDataMap(std::map<std::string, std::string> stateDataMap)
{
    //iterate through map and output every pair
    for (std::map<std::string, std::string>::iterator itr = stateDataMap.begin(); 
        itr != stateDataMap.end(); itr++) 
    {
        std::cout << "State: " << itr->first << ", Capital: " << itr->second << std::endl;
    }
}
/**Outputs the capital of the state input by the user
* @param stateDataMap map container with all the states and capitals
* @param state the state which you want to know the capital of
*/
void outputCapital(std::map<std::string, std::string> stateDataMap, std::string state)
{
    //iterate through the map to search for the state
    std::map<std::string, std::string>::iterator itr = stateDataMap.find(state);
    
    //if it reaches the end, output that the state is not found
    if (itr == stateDataMap.end())
    {
        std::cout << state << " is not found" << std::endl;
    }
    //if it is found output the capital
    else
    {
        std::cout << "Capital of " << state << " is " << itr->second << std::endl;
    }
}
int main() {
    //use the map to create a container to contain pairs of strings
    std::map<std::string, std::string> stateDataMap;

    //Add all the states and capitals
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";

    //outputs the data stored in stateDataMap.
    outputStateDataMap(stateDataMap);

    //change the capital of California to Los Angeles
    stateDataMap["California"] = "Los Angeles";
    std::cout << "After Changing the Capital of California to Los Angeles" << std::endl;
    
    outputStateDataMap(stateDataMap);
    
    //get the state from the user
    std::string state;
    std::cout << std::endl << "Enter state name: ";
    std::getline(std::cin, state);
    outputCapital(stateDataMap, state);

    return 0;
}