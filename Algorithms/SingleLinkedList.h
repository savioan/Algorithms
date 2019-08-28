
namespace Algorithms {

	template<typename T>
	struct ListNode {
		T _data;
		ListNode *_next;
		ListNode() {}
		ListNode(T data, ListNode *next) :
			_data(data),
			_next(next) {

		}
	};

	template<typename T>
	class SingleLinkedList {
	private:
		ListNode<T> *_head;
		ListNode<T> *_tail;
	public:
		SingleLinkedList();
		virtual ~SingleLinkedList();
		void insert_start(const T &item);
		void insert_end(const T &item);
		void insert_at(const T &item, int pos);
		void delete_first();
		void delete_last();
		void delete_at(int pos);
		void add_node(const T &item);
		void remove_node(const T &item);
		void display_list() const;
	};
}