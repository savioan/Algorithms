#include "Stack.h"
#include <stdint.h>
#include <exception>

class StackEmptyException : public std::exception {
public:
	virtual char const* what() const throw() {
		return "Stack is empty";
	}
} empty_exception;

class StackFullException : public std::exception {
public:
	virtual char const* what() const throw() {
		return "Stack is full";
	}
} full_exception;

class StackIndexOutOfBoundException : public std::exception {
public:
	virtual char const* what() const throw() {
		return "Index out of bound";
	}
} index_out_of_bound_exception;

template<typename T>
Stack<T>::Stack(uint32_t capacity) {
	this->_capacity = capacity;
	this->_size = 0;
	this->_elements = new T[capacity];
}

template<typename T>
Stack<T>::~Stack() {
	delete[] _elements;
}

template<typename T>
Stack<T>::Stack(const Stack<T>& other) {
	this->_capacity = other._capacity;
	this->_size = other._size;
	this->_elements = other._elements;
}

template<typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& other) {
	if (this != &other) {
		this->_capacity = other._capacity;
		this->_size = other._size;
		this->_elements = other._elements;
	}
	return *this;
}

template<typename T>
inline bool Stack<T>::push(const T& item) {
	if (is_full()){}
		throw full_exception;

	_elements[_size++] = item;
	return true;
}

template<typename T>
inline void Stack<T>::pop() {
	if (!is_empty())
		_size--;

	return;
}

template<typename T>
inline const T& Stack<T>::top() const {
	if (is_empty()){}
		throw empty_exception;

	return _elements[_size - 1];
}

template<typename T>
inline uint32_t Stack<T>::count() const {
	return _size;
}

template<typename T>
inline bool Stack<T>::is_empty() const {
	return _size == 0 ? true : false;
}

template<typename T>
inline bool Stack<T>::is_full() const {
	return _size == _capacity;
}

template<typename T>
inline const T& Stack<T>::operator[](uint32_t index) const {
	if (index >= _capacity){}
		throw index_out_of_bound_exception;

	return _elements[_size - 1 - index];
}

template class Stack<int>;