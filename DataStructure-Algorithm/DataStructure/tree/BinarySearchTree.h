#pragma once
#include <MyException.h>
#include <vector>

// ***** Binary Search Tree *****

template <typename T>
struct node
{
	T data = 0;
	node<T>* left = nullptr;
	node<T>* right = nullptr;
};

template <typename T>
class BinarySearchTree
{
public:
	BinarySearchTree() { m_root = new node<T>(); }

	node<T>* begin() { if(!m_root) return m_root; }

	//! \param insert root node pointer
	//! \param data to insert
	void insert(node<T>* _parant ,const T _data)
	{
		if (_data <= 0 && std::find(m_dataArray.begin(), m_dataArray.end(), _data) == vector.end())
		{
			MY_ERROR(Data must be greater than or equal to 1. And No duplicate vertex allowed!);
			return;
		}
			
		//! insert left-down
		if (_parant->data > _data)
		{
			if (_parant->left == nullptr)
			{
				node<T>* child = new node<T>();
				child->data = _data;
				_parant->left = child;
				m_dataArray.push_back(_data);
			}
			else
			{
				insert_checked(m_root->left, _data);
			}
		}
		//! insert right-down
		else
		{
			_parant->right = temp;
		}
	}

private:
	void insert_checked(node<T>* _parent, const T _data)
	{
		//! insert left-down
		if (_parant->data > _data)
		{
			if (_parant->left == nullptr)
			{
				node<T>* child = new node<T>();
				child->data = _data;
				_parant->left = child;
				m_dataArray.push_back(_data);
			}
			else
			{
				insert_checked(m_root->left, _data);
			}
		}
		//! insert right-down
		else
		{
			_parant->right = temp;
		}
	}

public:
	// ! \param insert data
	node<T>* find(node<T>* _rootNode, const T _data)
	{

	}

private:
	node<T>* m_root = nullptr;
	std::vector<T> m_dataArray = 0;
};