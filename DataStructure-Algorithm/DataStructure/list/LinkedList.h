//#pragma once
//#include <iostream>
//#include "node.h"
//
//// ***** Doubly Linked List *****
//
//
//template <typename T>
//class LinkedList
//{
//public:
//	LinkedList() : m_head(nullptr), m_tail(nullptr) {}
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
//		}
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
//private:
//	node<T>* m_head;
//	node<T>* m_tail;
//};