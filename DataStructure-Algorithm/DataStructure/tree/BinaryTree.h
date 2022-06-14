#pragma once

// ***** Binary Tree for Linked List *****

template <typename T>
struct node
{
	T data;
	node<T>* left;
	node<T>* right;
};

template <typename T>
class BinaryTree
{
public:
	BinaryTree() { m_root = new node<T>(); }

	node<T>* begin() { if(!m_root) return m_root; }

	//! \param insert root node pointer
	//! \param data to insert
	void insert(node<T>* _rootNode, const T _data)
	{
		node<T>* temp = new node<T>();
		if(m_root->data > temp->data)
	}

	// ! \param insert data
	node<T>* find(node<T>* _rootNode, const T _data)
	{

	}

private:
	node<T>* m_root = nullptr;
};