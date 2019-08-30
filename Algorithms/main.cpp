#include "pch.h"
#include <iostream>
#include <numeric>
#include <algorithm>
#include <functional>
#include "Stack.h"
#include "Queue.h"
#include "SingleLinkedList.h"
#include "DoubleLinkedList.h"
#include "LinearSearch.cpp"


int main()
{
	double arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	std::cout << Algorithms::linear_search(arr, 10, 70);
	return 0;
}