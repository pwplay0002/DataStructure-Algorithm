#pragma once
#include <iostream>

// ***** Doubly Linked List *****

template <typename T>
struct node
{
	T data;
	node* nexNode;
};

template <typename T>
class LinkedList
{
public:
	LinkedList() : m_head(nullptr), m_tail(nullptr) {}

	node<T>* begin() { return m_head; }
	node<T>* end() { return m_tail; }

	void push_front(T _data)
	{
		node<T>* temp = new node<T>();
		temp->data = _data;

		if (m_head == nullptr)
		{
			m_head = temp;
			m_tail = temp;
		}
		else
		{
			temp->nexNode = m_head;
			m_head = temp;
		}
	}

	void push_back(T _data)
	{
		node<T>* temp = new node<T>();
		temp->data = _data;

		if (m_head == nullptr)
		{
			m_head = temp;
			m_tail = temp;
		}
		else
		{
			m_tail->nexNode = temp;
			m_tail = temp;
		}
	}

	void insert(node<T>* prevNode, T _data)
	{
		node<T>* temp = new node<T>();
		temp->data = _data;

		temp->nexNode = prevNode->nexNode;
		prevNode->nexNode = temp;
	}

	void erase(node<T>* prevNode)
	{
		node<T>* temp = prevNode->nextNode;
		prevNode->nextNode = temp->nextNode;

		delete temp;
	}

	void display(node<T>* head)
	{
		if (head == nullptr)
		{
			std::cout << "\n";
		}
		else
		{
			std::cout << head->data << " ";
			display(head->nexNode);
		}
		std::cout << std::endl;
	}

private:
	node<T>* m_head;
	node<T>* m_tail;
};