//Xing Ji - CS303 Assignment 3
#ifndef QUEUE_H_
#define QUEUE_H_

#include <list>

namespace KW {
	template<typename Item_Type>
	class queue {

	public:
		/** Constructs an empty queue. */
		queue();

		/**pushses and item onto the back of the queue.
		@param item The item to be inserted*/
		void push(const Item_Type& item);

		/**Returns a reference to the object at the front of the queue with out removing it.
		@return A reference to the object at the front of the queue*/
		Item_Type& front();

		/**Returns a const reference to the object at the front of the queue without removing it.
		@return A const reference to the object at the front of the queue*/
		const Item_Type& front() const;

		/**Removes the front item from the queue.*/
		void pop();

		/**Determines whether the queue is empty. */
		bool empty() const;

		/** Returns the number of items in the queue */
		size_t size() const;

		/**Moves the item at the front of the queue to the rear of the queue*/
		void move_to_rear();

	private:
		std::list<Item_Type> container;
	};

#include "List Queue.tc"
}

#endif QUEUE_H
