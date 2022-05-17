//#pragma once
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class stack
//{
//public:
//	stack() : topIndex(-1) {}
//
//	void push(int value)
//	{
//		data[++topIndex] = value;
//	}
//	int pop()
//	{
//		if (empty()) return -1;
//		return data[topIndex--];
//	}
//	int size()
//	{
//		return topIndex + 1;
//	}
//	bool empty()
//	{
//		return (topIndex < 0);
//	}
//	int top()
//	{
//		if (empty()) return -1;
//		return data[topIndex];
//	}
//
//
//private:
//	int data[10005];
//	int topIndex;
//};
//
//int main(void)
//{
//	int N, value = 0;
//	string command;
//	stack s;
//
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> command;
//		if (command == "push")
//		{
//			cin >> value;
//			s.push(value);
//		}
//		else if (command == "pop")
//			cout << s.pop() << endl;
//		else if (command == "size")
//			cout << s.size() << endl;
//		else if (command == "empty")
//			cout << s.empty() << endl;
//		else if (command == "top")
//			cout << s.top() << endl;
//	}
//	return 0;
//}