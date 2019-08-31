#include "BinarySearch.h"

namespace Algorithms {

	template <typename T, size_t size, typename TStart, typename TEnd, typename TVal>
	int binary_search(T(&arr)[size], size_t size, TStart start, TEnd end, TVal key) {
		if (start <= end) {
			int mid = (start + (end - start) / 2);
			
			if (arr[mid] == key)
				return mid;

			if (arr[mid] > key)
				return binary_search(arr, size, start, mid - 1, key);

			return binary_search(arr, size, mid + 1, end, key);
		}
		return -1;
	}

}
