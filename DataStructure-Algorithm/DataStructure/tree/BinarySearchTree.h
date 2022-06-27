#pragma once
#include <MyException.h>
#include <vector>

// ***** Binary Search Tree *****
// by Doubly Linked list
// by used static allocation

#define MAX_LIST_SIZE 20000
template <typename T>
struct node
{
	T data = 0;
	node<T>* parant = nullptr;
	node<T>* left = nullptr;
	node<T>* right = nullptr;
};

template <typename T>
node<T> arr[MAX_LIST_SIZE];
int cnt = 0;

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

	node<T>* begin() { if(m_root) return m_root; }

	//! \param data to insert
	void insert(const T _data)
	{
		if (!find(_data))
		{
			MY_ERROR("Data must be greater than or equal to 1. And No duplicate vertex allowed!");
			return;
		}
		
		//! insert left-down if parameter is smaller than parant's data.
		if (m_root->data > _data)
		{
			if (m_root->left == nullptr)
			{
				node<T>* child = &arr<T>[_data];//new node<T>();
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
				node<T>* child = &arr<T>[_data];// new node<T>();
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
	node<T>* find(const T _data)
	{
		if (_data <= 0)
		{
			MY_ERROR("Data must be greater than or equal to 1.");
			return nullptr;
		}
		return &arr<T>[_data];
		//bool bFind = std::find(m_dataArray.begin(), m_dataArray.end(), _data)!= vector.end();
		//if(!bFind)
		//	return false;
		//else
		//	return true;
	}

	node<T>* traversal(node<T>* current, T _data)
	{
		if (current != NULL)
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

	void preorder_traversal(node<T>* current)
	{
		if (current != NULL)
		{
			cout << current->data << ' ';
			preorder_traversal(current->left);
			preorder_traversal(current->right);
		}
	}

	void inorder_traversal(node<T>* current)
	{
		if (current != NULL)
		{
			inorder_traversal(current->left);
			cout << current->data << ' ';
			inorder_traversal(current->right);
		}
	}

	void postorder_traversal(node<T>* current)
	{
		if (current != NULL)
		{
			postorder_traversal(current->left);
			postorder_traversal(current->right);
			cout << current->data << ' ';
		}
	}

	void erase(const T _data)
	{
		//! check
		if (!find(_data)) return;
		node<T>* ToBeErasedNode = find(_data);
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
			else
			{
				ToBeLocatedNodeParant->left = nullptr;
			}

			//! All pointers to ToBeErasedNode point to TobeLocatedNode.
			if (ToBeErasedNode->left != nullptr)
			{
				ToBeErasedNode->left->parant = ToBeLocatedNode;
				ToBeLocatedNode->left = ToBeErasedNode->left;
			}

			ToBeErasedNode->right->parant = ToBeLocatedNode;
			ToBeLocatedNode->right = ToBeErasedNode->right;

			ToBeErasedNodeParant->right = ToBeLocatedNode;
			ToBeLocatedNode->parant = ToBeErasedNodeParant;
		}
		//! ToBeErasedNode->right has not value && ToBeErasedNode->left has value
		else if (ToBeErasedNode->left != nullptr)
		{
			ToBeErasedNode->left->parant = ToBeErasedNodeParant;
			ToBeErasedNodeParant->right = ToBeErasedNode->left;
		}
		//! (ToBeErasedNode->right && ToBeErasedNode->left) has not value
		else
		{
			if (ToBeErasedNodeParant->left == ToBeErasedNode)
			{
				ToBeErasedNodeParant->left = nullptr;
			}
			else if (ToBeErasedNodeParant->right == ToBeErasedNode)
			{
				ToBeErasedNodeParant->right = nullptr;
			}
		}
		
		if (_data == m_root->data)
		{
			m_root = ToBeLocatedNode;
		}
		//arr<T>[_data] = nullptr;
	}

	node<T>* GetLeft_recursive(node<T>* parant)
	{
		if(parant->left == nullptr) return parant;
		else
		{
			GetLeft_recursive(parant->left);
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
	node<T>* m_root = nullptr;
	std::vector<T> m_dataArray;
};

// Example Code
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	BinarySearchTree<int> bst(41);
//	bst.insert(29);
//	bst.insert(55);
//	bst.insert(16);
//	bst.insert(33);
//	bst.insert(70);
//	bst.insert(60);
//	bst.insert(50);
//	bst.insert(80);
//	bst.insert(57);
//	bst.insert(65);
//
//	bst.erase(55);
//	cout << "Preorder_traveral : ";
//	bst.preorder_traversal(bst.begin());
//	cout << endl;
//
//	cout << "Inorder_traveral : ";
//	bst.inorder_traversal(bst.begin());
//	cout << endl;
//
//	cout << "Postorder_traveral : ";
//	bst.postorder_traversal(bst.begin());
//	cout << endl;
//	return 0;
//}
//
