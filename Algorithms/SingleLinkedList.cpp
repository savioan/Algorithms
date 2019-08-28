#include <iostream>
#include "SingleLinkedList.h"

namespace Algorithms {

	template<typename T>
	SingleLinkedList<T>::SingleLinkedList() {
		_head = nullptr;
		_tail = nullptr;
	}

	template<typename T>
	SingleLinkedList<T>::~SingleLinkedList() {

	}

	template<typename T>
	void SingleLinkedList<T>::add_node(const T &item) {
		ListNode<T> *temp = new ListNode<T>;
		temp->_data = item;
		temp->_next = nullptr;

		if (_head == nullptr) {
			_head = temp;
			_tail = temp;
			temp = nullptr;
		}
		else {
			_tail->_next = temp;
			_tail = _tail->_next;
		}
	}

	template<typename T>
	void SingleLinkedList<T>::insert_start(const T &item) {
		ListNode<T> *temp = new ListNode<T>;
		temp->_data = item;
		temp->_next = nullptr;

		if (_head == nullptr) {
			_head = temp;
			_tail = temp;
			temp = nullptr;
		}
		else {
			temp->_next = _head;
			_head = temp;
		}
	}

	template<typename T>
	void SingleLinkedList<T>::insert_end(const T &item) {
		ListNode<T> *temp = new ListNode<T>;
		temp->_data = item;
		temp->_next = nullptr;

		if (_head == nullptr) {
			_head = temp;
			_tail = temp;
			temp = nullptr;
		}
		else {
			_tail->_next = temp;
			_tail = _tail->_next;
		}
	}

	template<typename T>
	void SingleLinkedList<T>::insert_at(const T &item, int pos) {
		ListNode<T> *temp = new ListNode<T>;
		temp->_data = item;
		temp->_next = nullptr;
		ListNode<T> *current = _head;
		for (int i = 1; i < pos - 1; i++) {
			current = current->_next;
		}
		temp->_next = current->_next;
		current->_next = temp;
	}

	template<typename T>
	void SingleLinkedList<T>::remove_node(const T &item) {
		if (_head->_data == item) {
			ListNode<T> *temp = _head;
			_head = temp->_next;
			delete temp;
			return;
		}
		ListNode<T> *current = _head;
		while (current->_next != nullptr) {
			if (current->_next->_data == item) {
				current->_next = current->_next->_next;
				return;
			}
			current = current->_next;
		}
	}

	template<typename T>
	void SingleLinkedList<T>::delete_first() {
		ListNode<T> *temp = _head;
		_head = _head->_next;
		delete temp;
	}

	template<typename T>
	void SingleLinkedList<T>::delete_last() {
		ListNode<T> *current = _head;
		ListNode<T> *previous = new ListNode<T>;
		while (current->_next != nullptr) {
			previous = current;
			current = current->_next;
		}
		_tail = previous;
		_tail->_next = nullptr;
		delete current;
	}

	template<typename T>
	void SingleLinkedList<T>::delete_at(int pos) {
		ListNode<T> *current = _head;
		ListNode<T> *previous = new ListNode<T>;
		for (int i = 1; i < pos; i++) {
			previous = current;
			current = current->_next;
		}
		previous->_next = current->_next;
	}


	template<typename T>
	void SingleLinkedList<T>::display_list() const {
		ListNode<T> *current = _head;
		while (current != nullptr) {
			std::cout << current->_data << " ";
			current = current->_next;
		}
	}

	template class SingleLinkedList<int>;
}