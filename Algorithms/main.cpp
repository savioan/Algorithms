#include "pch.h"
#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "SingleLinkedList.h"

using namespace Algorithms;

int main()
{
	
	SingleLinkedList<int> *list = new SingleLinkedList<int>;
	list->display_list();

	return 0;
}