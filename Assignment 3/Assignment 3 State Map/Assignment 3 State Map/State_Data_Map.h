//Xing Ji - CS303 Assignment 3
#ifndef STATE_DATA_MAP_H_
#define STATE_DATA_MAP_H_

#include <map>
#include <utility>
#include <string>
#include <set>

class State_Data_Map
{
public:

		/**/
		void insert(std::pair<std::string, std::string>);

		/** Outputs data stored in stateDataMap*/
		void outputStateDataMap();

		/**Change paired value*/
		void changeCapital(std::map<std::string, std::string> stateMap, std::string state, std::string newCapital);

		/**Outputs the capitalName paired with the stateName*/
		void outputCapital(std::map<std::string, std::string> stateMap, std::string state);

private:
	std::map<std::string, std::string> stateMap;

};



#endif