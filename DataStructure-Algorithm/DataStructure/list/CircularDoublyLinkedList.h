#include <iostream>
#define endl '\n'
using namespace std;

// ***** Circular Doubly LinkedList *****
// by used static allocation

#define MAX_LIST_SIZE 2000100
template <typename T>
struct node
{
	T data;
	node<T>* prevNode;
	node<T>* nextNode;
};

template <typename T>
node<T> arr[MAX_LIST_SIZE];
int cnt = 0;
template <typename T>
class CircularDoublyLinkedList
{
public:
	CircularDoublyLinkedList() : m_head(nullptr), m_tail(nullptr) {}

	node<T>* begin() { return m_head; }
	node<T>* end() { return m_tail; }

	void push_front(T _data)
	{
		node<T>* temp = &arr<T>[cnt++];//new node<T>();
		temp->data = _data;

		if (m_head == nullptr)
		{
			m_head = temp;
			m_tail = temp;
			temp->nextNode = temp;
			temp->prevNode = temp;
		}
		else
		{
			temp->prevNode = m_tail;
			temp->nextNode = m_head;
			m_head = temp;
			m_tail->nextNode = m_head;
		}
	}

	void push_back(T _data)
	{
		node<T>* temp = &arr<T>[cnt++];//new node<T>();
		temp->data = _data;

		if (m_head == nullptr)
		{
			m_head = temp;
			m_tail = temp;
			temp->nextNode = temp;
			temp->prevNode = temp;
		}
		else
		{
			temp->nextNode = m_head;
			temp->prevNode = m_head->prevNode;
			m_tail->nextNode = temp;
			m_head->prevNode = temp;
			m_tail = temp;
		}
	}

	node<T>* previous(node<T>* _node)
	{
		return _node->prevNode;
	}

	node<T>* next(node<T>* _node)
	{
		return _node->nextNode;
	}

	// find with value
	node<T>* find(T _value)
	{
		return &arr<T>[_value];
	}

	void insert(node<T>* _prevNode, T _data)
	{
		node<T>* temp = &arr<T>[cnt++];
		temp->data = _data;
		temp->nextNode = _prevNode->nextNode;
		temp->prevNode = _prevNode;
		_prevNode->nextNode->prevNode = temp;
		_prevNode->nextNode = temp;
		if (_prevNode == m_tail)
		{
			m_head->prevNode = temp;
			temp->nextNode = m_head;
			m_tail = temp;
			temp = m_tail;
			temp->nextNode = m_head;
			temp->prevNode = _prevNode;
		}
	}

	void erase(node<T>* _node)
	{
		_node->prevNode->nextNode = _node->nextNode;
		_node->nextNode->prevNode = _node->prevNode;
		if (_node == m_head)
		{
			m_head = _node->nextNode;
			_node->nextNode = m_head;
		}
		else if (_node == m_tail)
		{
			m_tail = _node->prevNode;
			_node->prevNode = m_tail;
			_node->prevNode->nextNode = m_head;
		}
	}

private:
	node<T>* m_head;
	node<T>* m_tail;
};
