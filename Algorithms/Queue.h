#include <stdint.h>

template <class T=uintptr_t>
class Queue {
private:

	/*
	* Total capacity
	*/
	uint32_t _capacity;

	/*
	* Current queue size;
	*/
	uint32_t _size;

	/*
	* Index of the first element;
	*/
	uint32_t _first;

	/*
	* Index of the last element;
	*/
	uint32_t _last;

	/*
	* Elements are the stored items on queue
	*/
	T* _elements;

	/*
	* Copy Constructor
	*/
	Queue(const Queue&);

	/*
	* Assignment operator
	*/
	Queue& operator=(const Queue&);

public:

	/*
	* Capacity is the maximum elements the queue can hold
	*/
	Queue(uint32_t capacity);

	/*
	* Deconstructor
	*/
	virtual ~Queue();

	/*
	* Add an element into the queue
	*/
	bool enqueue(const T& item);

	/*
	* Remove an element from the queue
	*/
	void dequeue();

	/*
	* Remove the first element
	*/
	const T& GetFirst() const;

	/*
	* Remove the last element
	*/
	const T& GetLast() const;

	/*
	* Return if the queue is empty.
	*/
	inline bool is_empty() const;

	/*
	* Return if the queue is full.
	*/
	inline bool is_full() const;

	/*
	* Return the size of the queue.
	*/
	inline uint32_t count() const;
};