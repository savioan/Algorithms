# Algorithms &amp; Data Structures in C++

<!-- ## Data Structures

### 1. Stack

### 2. Queue

### 3. SingleLinkedList

### 4. DoubleLinkedList -->

## Searching Algorithms

### 1. Linear Search (Sequential Search)

In Linear search, we search an element or value in a given array by traversing the array from the starting, till the desired element or value is found.
It compares the element to be searched with all the elements present in the array and when the element is matched successfully, it returns the index of the element in the array, else it return -1.
Linear Search is applied on unsorted or unordered lists, when there are fewer elements in a list.

The **time complexity** of above algorithm is **O(n)**.

### 2. Binary Search

Binary Search is used with sorted array or list. In binary search, we follow the following steps:

1. We start by comparing the element to be searched with the element in the middle of the list/array.
2. If we get a match, we return the index of the middle element.
3. If we do not get a match, we check whether the element to be searched is less or greater than in value than the middle element.
4. If the element/number to be searched is greater in value than the middle number, then we pick the elements on the right side of the middle element(as the list/array is sorted, hence on the right, we will have all the numbers greater than the middle number), and start again from the step 1.
5. If the element/number to be searched is lesser in value than the middle number, then we pick the elements on the left side of the middle element, and start again from the step 1.

Binary Search is useful when there are large number of elements in an array and they are sorted. So a necessary condition for Binary search to work is that the list/array should be sorted.

The **time complexity** of above algorithm is **O(1)** for the best case and **O(logn)** for average and worst case.
