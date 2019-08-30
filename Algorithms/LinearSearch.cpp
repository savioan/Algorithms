#include <stdint.h>
#include "LinearSearch.h"

namespace Algorithms {

	template <typename T, size_t size, typename TVal>
	int32_t linear_search(T(&arr)[size], int size, TVal x) {
		for (int i = 0; i < size; i++) {
			if (arr[i] == x)
				return i;
		}
		return -1;
	}
}