#include <stdint.h>
#include "Queue.h"
#include <exception>

namespace Algorithms {

	class QueueEmptyException : public std::exception {
	public:
		virtual char const* what() const throw() {
			return "Queue is empty";
		}
	} empty_exception;


	template<class T>
	Queue<T>::Queue(uint32_t capacity) {
		this->_capacity = capacity;
		this->_size = 0;
		this->_first = 0;
		this->_last = -1;
		this->_elements = new T[capacity];
	}

	template<class T>
	Queue<T>::~Queue() {
		delete[] _elements;
	}

	template<class T>
	Queue<T>::Queue(const Queue& other) {
		this->_capacity = other._capacity;
		this->_first = other._first;
		this->_last = other._last;
		this->_size = other._size;
		this->_elements = other._elements;
	}

	template<class T>
	Queue<T>& Queue<T>::operator=(const Queue& other) {
		if (this != &other) {
			this->_capacity = other._capacity;
			this->_first = other._first;
			this->_last = other._last;
			this->_size = other._size;
			this->_elements = other._elements;
		}
		return *this;
	}

	template<class T>
	inline bool Queue<T>::enqueue(const T& item) {
		if (_size == _capacity) {
			return false;
		}

		_size++;
		_last++;

		if (_last == _capacity) {
			_last = 0;
		}

		_elements[_last] = item;
		return true;
	}

	template<class T>
	inline void Queue<T>::dequeue() {
		if (is_empty()) {
			return;
		}
		else {
			_size--;
			_first++;

			if (_first == _capacity) {
				_first = 0;
			}
		}
		return;
	}

	template<class T>
	const T& Queue<T>::GetFirst() const {
		if (is_empty())
			throw empty_exception;

		return _elements[_first];
	}

	template<class T>
	const T& Queue<T>::GetLast() const {
		if (is_empty())
			throw empty_exception;

		return _elements[_last];
	}

	template<class T>
	inline bool Queue<T>::is_empty() const {
		return _size == 0 ? true : false;
	}

	template<class T>
	inline bool Queue<T>::is_full() const {
		return _size == _capacity;
	}

	template<class T>
	inline uint32_t Queue<T>::count() const {
		return _size;
	}

	template class Queue<int>;

}