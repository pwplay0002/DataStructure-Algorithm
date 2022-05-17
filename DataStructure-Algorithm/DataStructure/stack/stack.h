#include <iostream>

#define MAX_STACK_SIZE 10000
// ※ 기존 stl stack 에서 pop함수는 리턴형이 void이다.
template <typename T>
class stack
{
public:
	stack() : topIndex(-1) {}

	void push(T value)
	{
		data[++topIndex] = value;
	}
	T pop()
	{
		if (empty()) return -1;
		return data[topIndex--];
	}
	T top()
	{
		if (empty()) return -1;
		return data[topIndex];
	}
	int size()
	{
		return topIndex + 1;
	}
	bool empty()
	{
		return (topIndex < 0);
	}
private:
	T data[MAX_STACK_SIZE];
	int topIndex;
};