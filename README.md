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

### 3. Exponential Search

Exponential search allows for searching through a sorted, unbounded list for a specified input value (the search "key"). The algorithm consists of two stages. The first stage determines a range in which the search key would reside if it were in the list. In the second stage, a binary search is performed on this range. In the first stage, assuming that the list is sorted in ascending order, the algorithm looks for the first exponent, j, where the value 2j is greater than the search key. This value, 2j becomes the upper bound for the binary search with the previous power of 2, 2j - 1, being the lower bound for the binary search.

In each step, the algorithm compares the search key value with the key value at the current search index. If the element at the current index is smaller than the search key, the algorithm repeats, skipping to the next search index by doubling it, calculating the next power of 2. If the element at the current index is larger than the search key, the algorithm now knows that the search key, if it is contained in the list at all, is located in the interval formed by the previous search index, 2j - 1, and the current search index, 2j. The binary search is then performed with the result of either a failure, if the search key is not in the list, or the position of the search key in the list. 

The **time complexity** of above algorithm is **O(1)** for the best case and **O(log2i)** for average and worst case. Where i is the location where search key is present.
