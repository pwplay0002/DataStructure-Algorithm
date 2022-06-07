//#pragma once
//#include <iostream>
//#include "node.h"
//
//// ***** Circular Linked List *****
//
//template <typename T>
//class CircularLinkedList
//{
//public:
//	CircularLinkedList() : m_head(nullptr), m_tail(nullptr) {}
//
//	node<T>* begin() { return m_head; }
//	node<T>* end() { return m_tail; }
//
//	void push_front(T _data)
//	{
//		node<T>* temp = new node<T>();
//		temp->data = _data;
//
//		if (m_head == nullptr)
//		{
//			m_head = temp;
//			m_tail = temp;
//		}
//		else
//		{
//			temp->nextNode = m_head;
//			m_head = temp;
//		}
//	}
//
//	void push_back(T _data)
//	{
//		node<T>* temp = new node<T>();
//		temp->data = _data;
//
//		if (m_head == nullptr)
//		{
//			m_head = temp;
//			m_tail = temp;
//		}
//		else
//		{
//			m_tail->nextNode = temp;
//			m_tail = temp;
//			temp->nextNode = m_head;
//		}
//	}
//
//	node<T>* next(node<T>* prevNode)
//	{
//		return prevNode->nextNode;
//	}
//
//	// find with value
//	node<T>* find(T _value)
//	{
//		node<T>* temp = begin();
//
//		while (temp != m_tail)
//		{
//			if (temp->data == _value)
//			{
//				return temp;
//			}
//			temp = next(temp);
//		}
//		return temp;
//	}
//
//	void insert(node<T>* prevNode, T _data)
//	{
//		node<T>* temp = new node<T>();
//		temp->data = _data;
//
//		temp->nexNode = prevNode->nexNode;
//		prevNode->nexNode = temp;
//	}
//
//	void erase(node<T>* prevNode)
//	{
//		node<T>* temp = prevNode->nextNode;
//		prevNode->nextNode = temp->nextNode;
//
//		delete temp;
//	}
//
//	void display(node<T>* head)
//	{
//		if (head == nullptr)
//		{
//			std::cout << "\n";
//		}
//		else if (head == m_tail)
//		{
//			std::cout << head->data << "\n";
//		}
//		else
//		{
//			std::cout << head->data << " ";
//			display(head->nextNode);
//		}
//		std::cout << std::endl;
//	}
//
//
//private:
//	node<T>* m_head;
//	node<T>* m_tail;
//};