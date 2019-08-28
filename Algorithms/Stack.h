#include <stdint.h>

template<typename T=uintptr_t>
class Stack {
private:
	int _capacity;
	int _size;
	T* _elements;
	Stack(const Stack&);
	Stack& operator=(const Stack&);
public:
	Stack(uint32_t capacity);
	virtual ~Stack();
	inline bool push(const T& item);
	inline void pop();
	inline const T& top() const;
	inline uint32_t count() const;
	inline bool is_empty() const;
	inline bool is_full() const;
	inline const T& operator[](uint32_t index) const;
};
