#include <stdint.h>

namespace Algorithms {

	template <typename T, size_t size, typename TStart, typename TEnd, typename TVal>
	int binary_search(T(&arr)[size], size_t size, TStart start, TEnd end, TVal x);

}
