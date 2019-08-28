#include <stdint.h>

template<typename T=uintptr_t>
class Stack {
private:

	/*
	* Total capacity
	*/
	int _capacity;


	/*
	* Current stack size
	*/
	int _size;


	/*
	* Elements are the stored items on stack
	*/
	T* _elements;


	/*
	* Copy Constructor
	*/
	Stack(const Stack&);


	/*
	* Assignment operator
	*/
	Stack& operator=(const Stack&);

public:

	/*
	* Capacity is the maximum elements the stack can hold
	*/
	Stack(uint32_t capacity);


	/*
	* Deconstructor
	*/
	virtual ~Stack();


	/*
	* Push an element into the stack
	*/
	inline bool push(const T& item);


	/*
	* Remove the top element from the stack
	*/
	inline void pop();

	/*
	* Get the top element from the stack
	*/
	inline const T& top() const;
	

	/*
	* Return the size of the stack.
	*/
	inline uint32_t count() const;
	

	/*
	* Return if the stack is empty.
	*/
	inline bool is_empty() const;


	/*
	* Return if the stack is full.
	*/
	inline bool is_full() const;


	/*
	* Return an element from the stack by index
	*/
	inline const T& operator[](uint32_t index) const;
};
