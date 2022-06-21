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
		if (find())
		{
			MY_ERROR("Data must be greater than or equal to 1. And No duplicate vertex allowed!");
			return;
		}
			
		//! insert left-down if parameter is smaller than parant's data.
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
		//! insert right-down if parameter is bigger than parant's data.
		else
		{
			_parant->right = temp;
		}
	}

private:
	//! \param insert root node pointer
	//! \param data to insert
	//! A function used when it is checked whether data can be added already.
	void insert_checked(node<T>* _parent, const T _data)
	{
		//! insert left-down if parameter is smaller than parant's data.
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
		//! insert right-down if parameter is bigger than parant's data.
		else
		{
			_parant->right = temp;
		}
	}

public:
	//! \param insert data
	bool find(const T _data)
	{
		if (_data <= 0)
		{
			MY_ERROR("Data must be greater than or equal to 1.");
			return;
		}
		bool bFind = std::find(m_dataArray.begin(), m_dataArray.end(), _data)!= vector.end();
		if(!bFind)
			return false;
		else
			return true;
	}

	void traversal(node<T>* current, T _data)
	{
		if (current != null)
		{
			if (current->left->data == _data)
			{
				current->left = current->left->left;
				current->right = current->right->right;
			}
			else if (current->right->data = _data)
			{

			}
			traversal(current->left);
			traversal(current->right);
		}
	}

	void inorder_traversal(node<T>* current)
	{
		if (current != null)
		{
			inorder_traversal(current->left);

		}
	}
	void erase(const T _data)
	{
		if (!find()) return;
		
		//! erase data with array
		for (auto it : m_dataArray)
		{
			if (m_dataArray[it] == _data)
			{
				m_dataArray.erase(it);
				break;
			}
		}

		while (!(m_root->data == _data))
		{
			
		}
		//! erase data with LinkedList
		if(this->m_root->data > _data)
	}

private:
	node<T>* m_root = nullptr;
	std::vector<T> m_dataArray = 0;
};