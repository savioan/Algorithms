
namespace Algorithms {
	
	template<typename T>
	struct DListNode
	{
		T _data;
		DListNode *_next;
		DListNode *_prev;
		DListNode(T data) :
			_data(data),
			_next(nullptr),
			_prev(nullptr)
		{ }
		DListNode(T data, DListNode *next, DListNode *prev) :
			_data(data),
			_next(next),
			_prev(prev) {

		}
	};

	template<typename T>
	class DoubleLinkedList {
	private:
		DListNode<T> *_head;
		DListNode<T> *_tail;
	public:
		DoubleLinkedList();
		virtual ~DoubleLinkedList();
		void insert_start(const T &item);
		void insert_end(const T &item);
		void insert_at(const T &item, int pos);
		void delete_first();
		void delete_last();
		void delete_at(int pos);
		void add_node(const T &item);
		void remove_node(const T &item);
		void display_list() const;
		void display_list_reverse() const;
	};
}
