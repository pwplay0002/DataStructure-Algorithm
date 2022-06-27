#pragma once
#include <MyException.h>
#include <vector>

// ***** Binary Search Tree *****
// by Doubly Linked list

template <typename T>
struct node
{
	T data = 0;
	node<T>* parant = nullptr;
	node<T>* left = nullptr;
	node<T>* right = nullptr;
};

template <typename T>
class BinarySearchTree
{
public:
	BinarySearchTree() = delete;
	BinarySearchTree(const T _value) 
	{
		m_root = new node<T>(); 
		m_root->data = _value;
	}

	node<T>* begin() { if(!m_root) return m_root; }

	//! \param data to insert
	void insert(const T _data)
	{
		if (find())
		{
			MY_ERROR("Data must be greater than or equal to 1. And No duplicate vertex allowed!");
			return;
		}
		
		//! insert left-down if parameter is smaller than parant's data.
		if (m_root->data > _data)
		{
			if (m_root->left == nullptr)
			{
				node<T>* child = new node<T>();
				child->data = _data;
				m_root->left = child;
				child->parant = m_root;
				m_dataArray.push_back(_data);
			}
			else
			{
				insert_recursive(m_root->left, _data);
			}
		}
		//! insert right-down if parameter is bigger than parant's data.
		else
		{
			if (m_root->right == nullptr)
			{
				node<T>* child = new node<T>();
				child->data = _data;
				m_root->right = child;
				child->parant = m_root;
				m_dataArray.push_back(_data);
			}
			else
			{
				insert_recursive(m_root->right, _data);
			}
		}
	}
private:
	//! \param insert root node pointer
	//! \param data to insert
	void insert_recursive(node<T>* _parant, const T _data)
	{
		if (_parant->data > _data)
		{
			if (_parant->left == nullptr)
			{
				node<T>* child = new node<T>();
				child->data = _data;
				_parant->left = child;
				child->parant = _parant;
				m_dataArray.push_back(_data);
			}
			else
			{
				insert_recursive(_parant->left, _data);
			}
		}
		//! insert right-down if parameter is bigger than parant's data.
		else
		{
			if (_parant->right == nullptr)
			{
				node<T>* child = new node<T>();
				child->data = _data;
				_parant->right = child;
				child->parant = _parant;
				m_dataArray.push_back(_data);
			}
			else
			{
				insert_recursive(_parant->right, _data);
			}
		}
	}

public:
	//! \param insert data.
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

	node<T>* traversal(node<T>* current, T _data)
	{
		if (current != null)
		{
			if (current->left->data == _data)
			{
				return current->left;
			}
			else if (current->right->data == _data)
			{
				return current->right;
			}
			else
			{
				traversal(current->left);
				traversal(current->right);
			}
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
		//! check
		if (!find()) return;
		node<T>* ToBeErasedNode = traversal(m_root, _data);
		node<T>* ToBeErasedNodeParant = ToBeErasedNode->parant;

		//! Initialize ToBeLocatedNode
		node<T>* ToBeLocatedNode = nullptr;

		//! ToBeErasedNode->right has value
		if (ToBeErasedNode->right != nullptr)
		{
			ToBeLocatedNode = GetLeft_recursive(ToBeErasedNode->right);

			node<T>* ToBeLocatedNodeParant = ToBeLocatedNode->parant;

			//! Point ToBeLocatedNode's right pointer to TobeLocatedNodeParant
			if (ToBeLocatedNode->right != nullptr)
			{
				ToBeLocatedNodeParant->left = ToBeLocatedNode->right;
				ToBeLocatedNode->right->parant = ToBeLocatedNodeParant;
			}

			//! All pointers to ToBeErasedNode point to TobeLocatedNode.
			if (ToBeErasedNode->left != nullptr)
			{
				ToBeErasedNode->left->parant = ToBeLocatedNode;
				ToBeLocatedNode->left = ToBeErasedNode->left;
			}
			if (ToBeErasedNode->right != nullptr)
			{
				ToBeErasedNode->right->parant = ToBeLocatedNode;
				ToBeLocatedNode->right = ToBeErasedNode->right;
			}
		}
		//! ToBeErasedNode->right has not value && ToBeErasedNode->left has value
		else if (ToBeErasedNode->left != nullptr)
		{
			ToBeErasedNode->left->parant = ToBeErasedNodeParant;
			ToBeErasedNodeParant->right = ToBeErasedNode->left;
		}

	}

	node<T>* GetLeft_recursive(node<T>* parant)
	{
		if(parant->left == nullptr) return parant;
		else
		{
			GetLeft_recursive(parant->left);
		}
	}

	node<T>* GetRight_recursive(node<T>* parant)
	{
		if (parant->left == nullptr) return parant;
		else
		{
			GetRight_recursive(parant->right);
		}
	}

	node<T>* GetLeft(node<T>* parant)
	{
		return parant->left;
	}

	node<T>* GetRight(node<T>* parant)
	{
		return parant->right;
	}

private:
	bool m_isChecked = false;
	node<T>* m_root = nullptr;
	std::vector<T> m_dataArray = 0;
};