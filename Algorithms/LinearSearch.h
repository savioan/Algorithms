#include <stdint.h>

namespace Algorithms {

	template <typename T, size_t size, typename TVal>
	int32_t linear_search(T(&arr)[size], int size, TVal x);
}
