//Xing Ji - CS303 Assignment 3
#ifndef STATE_DATA_MAP_H_
#define STATE_DATA_MAP_H_

#include <set>
#include <utility>
namespace KW
{
	/** Definition of the map class using the std::set. */
	template<typename Key_Type, typename Value_Type>
	class map {
	public:
		// Define the Entry_Type.
		typedef std::pair<const Key_Type, Value_Type> Entry_Type;
		// Compare only the keys.
		struct Key_Compare {
			bool operator()(const Entry_Type& left,
				const Entry_Type& right) const {
				return left.first < right.first;
			}
		};
		// Define the iterator types
		typedef typename std::set<Entry_Type,
			Key_Compare>::iterator iterator;
		typedef typename std::set<Entry_Type,
			Key_Compare>::const_iterator const_iterator;
		// Delegate the functions.
		iterator begin() {
			return the_set.begin();
		}
		const_iterator begin() const {
			return the_set.begin();
		}
		524 Chapter 9 Sets and Maps
			iterator end() {
			return the_set.end();
		}
		const_iterator end() const {
			return the_set.end();
		}
		bool empty() {
			return the_set.empty();
		}
		int size() {
			return the_set.size();
		}
		std::pair<iterator, bool> insert(const Entry_Type& item) {
			return the_set.insert(item);
		}
		void erase(const Key_Type& key) {
			the_set.erase(Entry_Type(key, Value_Type()));
		}
		iterator find(const Key_Type& key) {
			return the_set.find(Entry_Type(key, Value_Type()));
		}

		//Constructs an empty State Data Map
		State_Data_Map();

		/** Outputs data stored in stateDataMap*/
		void outputStateDataMap();

		/**Change paired value*/
		void changeCapital(std::string newCapital);

		/**Outputs the capitalName paired with the stateName*/
		std::string outputCapital(std::string stateName);

	private:
		std::set<Entry_Type, Key_Compare> the_set;

	};
}


#endif