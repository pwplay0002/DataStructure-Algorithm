//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//struct node
//{
//	int data;
//	node* prevNode;
//	node* nextNode;
//};
//
//node arr[2000100];
//int cnt = 0;
//
//class CircularDoublyLinkedList
//{
//public:
//	CircularDoublyLinkedList() : m_head(nullptr), m_tail(nullptr) {}
//
//	node* begin() { return m_head; }
//	node* end() { return m_tail; }
//
//	void push_front(int _data)
//	{
//		node* temp = &arr[_data];
//		temp->data = _data;
//
//		if (m_head == nullptr)
//		{
//			m_head = temp;
//			m_tail = temp;
//			temp->nextNode = temp;
//			temp->prevNode = temp;
//		}
//		else
//		{
//			temp->prevNode = m_tail;
//			temp->nextNode = m_head;
//			m_head = temp;
//			m_tail->nextNode = m_head;
//		}
//	}
//
//	void push_back(int _data)
//	{
//		node* temp = &arr[_data];
//		temp->data = _data;
//
//		if (m_head == nullptr)
//		{
//			m_head = temp;
//			m_tail = temp;
//			temp->nextNode = temp;
//			temp->prevNode = temp;
//		}
//		else
//		{
//			temp->nextNode = m_head;
//			temp->prevNode = m_head->prevNode;
//			m_tail->nextNode = temp;
//			m_head->prevNode = temp;
//			m_tail = temp;
//		}
//	}
//
//	node* previous(node* _node)
//	{
//		return _node->prevNode;
//	}
//
//	node* next(node* _node)
//	{
//		return _node->nextNode;
//	}
//
//	// find with value
//	node* find(int _value)
//	{
//		return &arr[_value];
//	}
//
//	void insert(node* _prevNode, int _data)
//	{
//		node* temp = &arr[_data];
//		temp->data = _data;
//		temp->nextNode = _prevNode->nextNode;
//		temp->prevNode = _prevNode;
//		_prevNode->nextNode->prevNode = temp;
//		_prevNode->nextNode = temp;
//		if (_prevNode == m_tail)
//		{
//			m_head->prevNode = temp;
//			temp->nextNode = m_head;
//			m_tail = temp;
//			temp = m_tail;
//			temp->nextNode = m_head;
//			temp->prevNode = _prevNode;
//		}
//	}
//
//	void erase(node* _node)
//	{
//		_node->prevNode->nextNode = _node->nextNode;
//		_node->nextNode->prevNode = _node->prevNode;
//		if (_node == m_head)
//		{
//			m_head = _node->nextNode;
//			_node->nextNode = m_head;
//		}
//		else if (_node == m_tail)
//		{
//			m_tail = _node->prevNode;
//			_node->prevNode = m_tail;
//			_node->prevNode->nextNode = m_head;
//		}
//	}
//
//private:
//	node* m_head;
//	node* m_tail;
//};
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	CircularDoublyLinkedList cl;
//	int N, M;
//	string work;
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//	{
//		int temp;
//		cin >> temp;
//		cl.push_back(temp);
//	}
//	for (int i = 0; i < M; i++)
//	{
//		cin >> work;
//		int temp1, temp2;
//		if (work == "BN")
//		{
//			cin >> temp1 >> temp2;
//			node* _node = cl.find(temp1);
//			cout << _node->nextNode->data << endl;
//			cl.insert(_node, temp2);
//		}
//		else if (work == "BP")
//		{
//			cin >> temp1 >> temp2;
//			node* _node = cl.find(temp1);
//			cout << _node->prevNode->data << endl;
//			cl.insert(_node->prevNode, temp2);
//		}
//		else if (work == "CN")
//		{
//			cin >> temp1;
//			node* _node = cl.find(temp1);
//			cout << _node->nextNode->data << endl;
//			cl.erase(_node->nextNode);
//		}
//		else if (work == "CP")
//		{
//			cin >> temp1;
//			node* _node = cl.find(temp1);
//			cout << _node->prevNode->data << endl;
//			cl.erase(_node->prevNode);
//		}
//	}
//	return 0;
//}
//
