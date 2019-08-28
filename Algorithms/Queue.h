#include <stdint.h>

template <class T=uintptr_t>
class Queue {
private:
	uint32_t _capacity;
	uint32_t _size;
	uint32_t _first;
	uint32_t _last;
	T* _elements;
	Queue(const Queue&);
	Queue& operator=(const Queue&);
public:
	Queue(uint32_t capacity);
	virtual ~Queue();
	bool enqueue(const T& item);
	void dequeue();
	const T& GetFirst() const;
	const T& GetLast() const;
	inline bool is_empty() const;
	inline bool is_full() const;
	inline uint32_t count() const;
};