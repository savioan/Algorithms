#include <iostream>
#include "DoubleLinkedList.h"

namespace Algorithms {

	template<typename T>
	DoubleLinkedList<T>::DoubleLinkedList() {
		_head = nullptr;
		_tail = nullptr;
	}

	template<typename T>
	DoubleLinkedList<T>::~DoubleLinkedList() {
		
	}

	template<typename T>
	void DoubleLinkedList<T>::insert_start(const T& item) {
		DListNode<T> *temp = new DListNode<T>(item);

		if (_head == nullptr) {
			_head = temp;
			_tail = temp;
			temp = nullptr;
		}
		else {
			temp->_next = _head;
			_head->_prev = temp;
			_head = temp;
		}
	}

	template<typename T>
	void DoubleLinkedList<T>::insert_end(const T& item) {
		DListNode<T> *temp = new DListNode<T>(item);

		if (_head == nullptr) {
			_head = temp;
			_tail = temp;
			temp = nullptr;
		}
		else {
			_tail->_next = temp;
			temp->_prev = _tail;
			_tail = temp;
		}
	}

	template<typename T>
	void DoubleLinkedList<T>::insert_at(const T& item, int pos) {
		DListNode<T> *temp = new DListNode<T>(item);
		DListNode<T> *current = _head;
		for (int i = 1; i < pos - 1; i++) {
			current = current->_next;
		}
		temp->_next = current->_next;
		temp->_prev = current;
		current->_next = temp;
		if (temp->_next != nullptr)
			temp->_next->_prev = temp;
	}

	template<typename T>
	void DoubleLinkedList<T>::add_node(const T& item) {
		DListNode<T> *temp = new DListNode<T>(item);

		if (_head == nullptr) {
			_head = temp;
			_tail = temp;
			temp = nullptr;
		}
		else {
			_tail->_next = temp;
			temp->_prev = _tail;
			_tail = _tail->_next;
		}
	}

	template<typename T>
	void DoubleLinkedList<T>::delete_first()  {
		DListNode<T> *temp = _head;
		if (_head == nullptr)
			std::cout << "List is empty";

		_head = temp->_next;
		_head->_prev = nullptr;
		delete temp;
	}

	template<typename T>
	void DoubleLinkedList<T>::delete_last() {
		DListNode<T> *temp = _tail;
		if (_head == nullptr)
			std::cout << "List is empty";

		_tail = temp->_prev;
		_tail->_next = nullptr;
		delete temp;
	}

	template<typename T>
	void DoubleLinkedList<T>::delete_at(int pos) {
		if (_head == nullptr)
			std::cout << "List is empty";

		DListNode<T> *current = _head;
		DListNode<T> *previous = nullptr;
		for (int i = 1; i < pos; i++) {
			previous = current;
			current = current->_next;
		}
		DListNode<T> *temp = current;
		previous->_next = current->_next;
		current->_next->_prev = previous;
		delete temp;
	}

	template<typename T>
	void DoubleLinkedList<T>::remove_node(const T& item) {
		DListNode<T> *temp = _tail;
		if (_head == nullptr)
			std::cout << "List is empty";

		_tail = temp->_prev;
		_tail->_next = nullptr;
		delete temp;
	}

	template<typename T>
	void DoubleLinkedList<T>::display_list() const {
		DListNode<T> *current = _head;
		while (current != nullptr) {
			std::cout << current->_data << " ";
			current = current->_next;
		}
	}

	template<typename T>
	void DoubleLinkedList<T>::display_list_reverse() const {
		DListNode<T> *current = _tail;
		while (current != nullptr) {
			std::cout << current->_data << " ";
			current = current->_prev;
		}
	}

	template class DoubleLinkedList<int>;
}