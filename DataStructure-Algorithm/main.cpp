#include <iostream>
using namespace std;

template <typename T>
struct node
{
	T data;
	node<T>* prevNode;
	node<T>* nextNode;
};

template <typename T>
class CircularLinkedList
{
public:
	CircularLinkedList() : m_head(nullptr), m_tail(nullptr) {}

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
			temp->prevNode = m_tail;
			temp->nextNode = m_head;
			m_head = temp;
			m_tail->nextNode = m_head;
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
			temp->prevNode = m_tail;
			m_tail->nextNode = temp;
			m_tail = temp;
			temp->nextNode = m_head;
		}
	}

	node<T>* previous(node<T>* nextNode)
	{
		return nextNode->prevNode;
	}

	node<T>* next(node<T>* prevNode)
	{
		return prevNode->nextNode;
	}

	// find with value
	node<T>* find(T _value)
	{
		node<T>* temp = begin();

		while (temp != m_tail)
		{
			if (temp->data == _value)
			{
				return temp;
			}
			temp = next(temp);
		}
		return temp;
	}

	void insert(node<T>* prevNode, T _data)
	{
		node<T>* temp = new node<T>();
		temp->data = _data;
		temp->nextNode = prevNode->nextNode;
		temp->prevNode = prevNode;
		prevNode->nextNode = temp;
	}

	void erase(node<T>* prevNode)
	{
		node<T>* prevTemp = prevNode->prevNode;
		node<T>* nextTemp = prevNode->nextNode;
		prevNode->prevNode = nextTemp->prevNode;
		prevNode->nextNode = nextTemp->nextNode;

		delete nextTemp;
	}

	void display(node<T>* head)
	{
		if (head == nullptr)
		{
			std::cout << "\n";
		}
		else if (head == m_tail)
		{
			std::cout << head->data << "\n";
		}
		else
		{
			std::cout << head->data << " ";
			display(head->nextNode);
		}
		std::cout << std::endl;
	}


private:
	node<T>* m_head;
	node<T>* m_tail;
};
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	CircularLinkedList<int> cl;
	//cl.push_front(100);
	//cl.push_front(200);
	//cl.push_front(300);
	cl.push_back(400);
	cl.push_back(500);
	cl.push_back(600);
	cout << cl.previous(cl.begin())->data << endl;
	cl.display(cl.begin());
	/*int N, M;
	string work;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		cl.push_back(temp);
	}
	
	for (int i = 0; i < M; i++)
	{
		cin >> work;
		int temp1, temp2;
		if (work == "BN")
		{
			cin >> temp1 >> temp2;
			node<int>* _node = cl.find(temp1);
			cout << _node->nextNode->data << endl;
			cl.insert(_node, temp2);
		}
		else if (work == "BP")
		{
			cin >> temp1 >> temp2;
			node<int>* _node = cl.find(temp1);
			cout << _node->prevNode->data << endl;
			cl.insert(_node->prevNode, temp2);
		}
		else if (work == "CN")
		{
			cin >> temp1;
			node<int>* _node = cl.find(temp1);
			cout << _node->nextNode->data << endl;
			cl.erase(_node->nextNode);
		}
		else if (work == "CP")
		{
			cin >> temp1;
			node<int>* _node = cl.find(temp1);
			cout << _node->prevNode->data << endl;
			cl.erase(_node->prevNode);
		}
		cl.display(cl.begin());
	}*/
	return 0;
}